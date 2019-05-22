//
//  Situation.h
//  Labo 16 riviere
//
//  Created by Max Caduff on 19.05.18.
//  General Public Licence
//

#ifndef __Labo_16_riviere__Situation__
#define __Labo_16_riviere__Situation__

#include <stdio.h>
#include <list>
#include <map>
#include "Bank.h"
#include "Boat.h"

#include "Person/Person.h"
#include "Person/Mother.h"
#include "Person/Father.h"
#include "Person/Son.h"
#include "Person/Daughter.h"
#include "Person/Policeman.h"
#include "Person/Thief.h"
#include "../Command/CmdHeaders.h"

/**
 * Represents a state of the simulation
 */
class Situation {

public:
    
    Situation();
    ~Situation();
    /**
     * Returns the left side bank
     */
    Bank* getLeftSide();
    /**
     * Returns the right side bank
     */
    Bank* getRightSide();
    /**
     * Returns the boat
     */
    Boat* getBoat();
    /**
     * Returns a map of characters associated with their supported command
     */
    const map <string, Command* > &getSupportedCommands();
    /**
     * Returns the value of the current turn
     */
    int getTurn() const;
    /**
     * Returns true if the simulation is running
     */
    bool isRunning() const;

    /**
     * Sets the initial state
     */
    void init();
    /**
     * Stops the simulation
     */
    void stop();
    /**
     * Increase turn
     */
    void nextTurn();
    /**
     * returns true if everyone is on the right side.
     */
    bool isSuccess();

    static const string LEFT_SIDE;
    static const string RIGHT_SIDE;
    static const string PRINT_CMD;
    static const string EMBARK_CMD;
    static const string DEBARK_CMD;
    static const string MOVE_CMD;
    static const string RESET_CMD;
    static const string HELP_CMD;
    static const string QUIT_CMD;
    
private:
    Bank *left = new Bank(LEFT_SIDE);
    Bank *right = new Bank(RIGHT_SIDE);
    Boat *boat = new Boat(left);
    const list <const Person*> persons = {new Policeman ("policeman"),
                                    new Thief ("thief"),
                                    new Father ("father"),
                                    new Mother ("mother"),
                                    new Daughter("mary"),
                                    new Daughter ("jane"),
                                    new Son ("jack"),
                                    new Son ("daniel") };

    
    const map <string, Command* > supportedCommands = {
                                    {PRINT_CMD, new PrintCmd(this)},
                                    {EMBARK_CMD, new EmbarkCmd(this)},
                                    {DEBARK_CMD, new DebarkCmd(this)},
                                    {MOVE_CMD, new MoveCmd(this)},
                                    {RESET_CMD, new ResetCmd(this)},
                                    {HELP_CMD, new HelpCmd(this)},
                                    {QUIT_CMD, new QuitCmd(this)}  };
    
    bool running;
    int turn;
    
//  blocking shallow copy
    Situation(const Situation& s) {}
    
};


#endif /* defined(__Labo_16_riviere__Situation__) */
