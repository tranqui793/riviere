//
//  HelpCmd.cpp
//  Labo 16 riviere
//
//  Created by Max Caduff on 20.05.18.
//  General Public Licence
//

#include "HelpCmd.h"
#include "Situation.h"

HelpCmd::HelpCmd (Situation* situation) :  Command(situation) {}


bool HelpCmd::execute (const string arg) {

    
    for (auto c : s->getSupportedCommands() ) {
        c.second->printHelp();
    }
    cout << endl;
    return true;

}

void HelpCmd::printHelp() const {
    cout << "h(elp)          : gives the different available commands." << endl ;
}