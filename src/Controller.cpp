//
// Created by Gaussian on 30.04.2018.
//

#include "Controller.h"

Controller::Controller () {
    situation = new Situation();
}

Controller::~Controller () {
    delete situation;
}


void Controller::run() {
    string line;

    situation->getSupportedCommands().at(Situation::HELP_CMD)->execute("");
    situation->getSupportedCommands().at(Situation::PRINT_CMD)->execute("");

    while (situation->isRunning()) {
    
        cout << situation->getTurn() << "> ";
        getline(cin, line);
        if (line.empty()) {
            cout << "### error: You should enter a command!" << endl ;
            continue;
        }
        
        string cmd = line.substr (0, line.find(' '));
        string arg = line.substr (line.find(' ') + 1, line.length());
        Command* selectCmd = nullptr;
        for ( auto mapCmd: situation->getSupportedCommands() ) {
            // ok if all letters in the cmd matches the command, but only a
            // few letters are ok (even 1)
            if (!strncmp( cmd.c_str(), mapCmd.first.c_str(), cmd.length())) {
                selectCmd = mapCmd.second;
                break;
            }
        }
        
        if (! selectCmd) {
            cout << "### Error, command not found." << endl ;
            continue;
        }
        
        if (! selectCmd->execute(arg))
            continue;
        
        
        if (strncmp( cmd.c_str(), Situation::PRINT_CMD.c_str(), cmd.length())
            && strncmp( cmd.c_str(), Situation::HELP_CMD.c_str(),  cmd.length())
            && strncmp( cmd.c_str(), Situation::QUIT_CMD.c_str(),  cmd.length()))
                situation->getSupportedCommands().
                at(Situation::PRINT_CMD)->execute("");
        
        if (situation->isSuccess())
            cout << "Success: everyone is on the right side! "
                 << "But you can continue playing for fun ;)\n";
        
        
        if (strncmp( cmd.c_str(), Situation::RESET_CMD.c_str(), cmd.length()) )
            situation->nextTurn();
        
        // TODO: check if situation is won
    }
}
