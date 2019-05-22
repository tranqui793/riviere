//
//  DebarkCmd.cpp
//  Labo 16 riviere
//
//  Created by Max Caduff on 20.05.18.
//  General Public Licence
//

#include "DebarkCmd.h"
#include "Situation.h"

DebarkCmd::DebarkCmd (Situation* situation) : Command(situation) {}


bool DebarkCmd::execute (const string arg) {
    
    Boat* boat = s->getBoat();
    
    list<const Person*> pplOnSide = boat->getCurrentSide()->getPersons();
  
    const Person* p = boat->findPeople(arg);
    if (p) {
        return checkAndMovePeople(boat, boat->getCurrentSide(), p);
    }
    else {
        cout << "### error: people " + arg + " not found.\n";
        return false;
    }
    
}

void DebarkCmd::printHelp() const {
    
    cout << "d(ebark) <name> : gets <name> outside the boat." << endl;
}
