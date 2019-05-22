//
// Created by Gaussian on 30.04.2018.
//

#ifndef LABO16_BOAT_H
#define LABO16_BOAT_H

#include "Bank.h"

/**
 * Represents the boat
 */
class Boat : public Container {

public:
    /**
     * Constructor
     * Sets the current bank
     */
    Boat(Bank*);
    
    ~Boat () {}
    /**
     * Returns true if there is space for a person to board
     */
    bool canBoard() const;
    /**
     * Moves the boat to another bank
     */
    void move(Bank*);
    /**
     * Returns true if the boat can be moved to another bank
     */
    bool canMove() const;
    /**
     * Returns the current bank
     */
    Bank* getCurrentSide();

    static const int BOAT_SIZE = 2;


private:
    Bank *currentSide;

    friend ostream& operator << (ostream& os, const Boat& b);
};


#endif //LABO16_BOAT_H
