//
//  ResetCmd.cpp
//  Labo 16 riviere
//
//  Created by Max Caduff on 20.05.18.
//  General Public Licence
//

#include "ResetCmd.h"
#include "Situation.h"


ResetCmd::ResetCmd (Situation* situation) :  Command(situation) {}

bool ResetCmd::execute (const string arg) {
    
    s->init();
    return true;
}


void ResetCmd::printHelp() const {
    
    cout << "r(eset)         : gets back to the initial situation." << endl;
}