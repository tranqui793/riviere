//
//  PrintCmd.cpp
//  Labo 16 riviere
//
//  Created by Max Caduff on 20.05.18.
//  General Public Licence
//

#include "PrintCmd.h"
#include "Situation.h"


PrintCmd::PrintCmd (Situation* situation) :  Command(situation) {}

bool PrintCmd::execute (const string arg) {
    
    
    Bank *left = s->getLeftSide();
    Bank *right = s->getRightSide();
    
    cout << DELIM << left->name() << ": " << *left;
    
    cout << endl << DELIM ;
    
    if (s->getBoat()->getCurrentSide()->name() == Situation::LEFT_SIDE )
        cout << s->getBoat()->name() << ": " << *s->getBoat();
    
    cout << endl << RIVER;
    
    if (s->getBoat()->getCurrentSide()->name() == Situation::RIGHT_SIDE )
        cout << s->getBoat()->name() << ": " << *s->getBoat();
    
    cout << endl << DELIM << right->name() << ": " << *right;
    
    cout << endl << DELIM << endl ;
    
    return true;
}

void PrintCmd::printHelp() const {
    cout << "p(rint)         : prints the current situation." << endl ;
}

