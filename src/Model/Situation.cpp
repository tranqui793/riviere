//
//  Situation.cpp
//  Labo 16 riviere
//
//  Created by Max Caduff on 19.05.18.
//  General Public Licence
//

#include "Situation.h"


const string Situation::LEFT_SIDE = "left side";
const string Situation::RIGHT_SIDE = "right side";
const string Situation::PRINT_CMD = "print";
const string Situation::EMBARK_CMD = "embark";
const string Situation::DEBARK_CMD = "debark";
const string Situation::MOVE_CMD = "move";
const string Situation::RESET_CMD = "reset";
const string Situation::HELP_CMD = "help";
const string Situation::QUIT_CMD = "quit";



Situation::Situation() : running(true) {
    
    init();
}

Situation::~Situation() {
    for (auto c : supportedCommands ) {
        delete c.second ;
    }
    for (auto p : persons ) {
        delete p;
    }
    delete left;
    delete right;
    delete boat;
}

Bank* Situation::getLeftSide () {
    return left;
}

Bank* Situation::getRightSide () {
    return right;
}

Boat* Situation::getBoat () {
    return boat;
}

const map <string, Command*>& Situation::getSupportedCommands () {
    return supportedCommands;
}

void Situation::init () {
    
    turn = 0;
    left->clear();
    right->clear();
    boat->clear();
    
    for (auto p : persons) {
        left->add(p);
    }
    if (boat->getCurrentSide() == right)
        boat->move(left);
    
}

void Situation::stop() {
    running = false;
}

bool Situation::isRunning() const {
    return running;
}

void Situation::nextTurn() {
    turn++;
}

int Situation::getTurn() const {
    return turn;
}

bool Situation::isSuccess() {
    for (const Person* p : persons)
        if (! right->findPeople(p->getName()))
            return false;
    return true;

}


