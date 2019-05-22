//
//  QuitCmd.cpp
//  Labo 16 riviere
//
//  Created by Max Caduff on 20.05.18.
//  General Public Licence
//

#include "QuitCmd.h"
#include "Situation.h"

QuitCmd::QuitCmd (Situation* situation) :  Command(situation) {}


bool QuitCmd::execute (const string arg) {
    
    cout << "bye!" << endl ;
    s->stop();
    return true;
}


void QuitCmd::printHelp() const {
    cout << "q(uit)          : quits the program." << endl;
}