//
//  MoveCmd.cpp
//  Labo 16 riviere
//
//  Created by Max Caduff on 20.05.18.
//  General Public Licence
//

#include "MoveCmd.h"
#include "Situation.h"

MoveCmd::MoveCmd (Situation* situation) :  Command(situation) {}


bool MoveCmd::execute (const string arg) {
    if(s->getBoat()->canMove()) {
        Bank *newSide = s->getBoat()->getCurrentSide() == s->getLeftSide() ? s->getRightSide() : s->getLeftSide();
        s->getBoat()->move(newSide);
        return true;
    } else
        cout << "### error: Cannot move boat; nobody on board is able to drive.\n";
    return false;
}

void MoveCmd::printHelp() const {
    
    cout << "m(ove)          : moves the boat to the other side." << endl;
}