//
// Created by Gaussian on 30.04.2018.
//

#include "Boat.h"

Boat::Boat(Bank *initialSide) : Container("Boat"), currentSide(initialSide) {}

bool Boat::canBoard() const {
    return size() < BOAT_SIZE;
}


bool Boat::canMove() const {
    for(auto &p : _persons)
        if(p->canDrive())
            return true;
    return false;
}

void Boat::move(Bank *newSide) {
    currentSide = newSide;
}

Bank* Boat::getCurrentSide() {
    return currentSide;
}


ostream& operator << (ostream& os, const Boat& b) {
    os << "< " << (Container)b << ">" ;
    return os;
}