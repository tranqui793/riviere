//
//  EmbarkCmd.cpp
//  Labo 16 riviere
//
//  Created by Max Caduff on 20.05.18.
//  General Public Licence
//

#include "EmbarkCmd.h"
#include "Situation.h"


EmbarkCmd::EmbarkCmd (Situation* situation) :  Command(situation) {}

bool EmbarkCmd::execute (const string arg) {
    
    Boat* boat = s->getBoat();
    
    list<const Person*> pplOnSide = boat->getCurrentSide()->getPersons();
    
    const Person* p = boat->getCurrentSide()->findPeople(arg);
    if (p) {
        
        if (boat->canBoard())
            return checkAndMovePeople(boat->getCurrentSide(), boat, p);
        else
            cout << "### error: There is not enough space on the boat.\n";
    }
    else
        cout << "### error: people " + arg + " not found.\n";
    return false;
}


void EmbarkCmd::printHelp() const {
    cout << "e(mbark) <name> : puts <name> inside the boat." << endl ;
}