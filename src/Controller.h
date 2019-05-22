//
// Created by Gaussian on 30.04.2018.
//

#ifndef LABO16_CONTROLLER_H
#define LABO16_CONTROLLER_H

#include "Model/Situation.h"
#include <map>

/**
 * The controller
 * Responsible for changing turns, parsing user input and executing the commands
 */
class Controller {
    
public:
    Controller();
    ~Controller ();
    /**
     * Displays help, the initial situation and runs the simulation
     */
    void run ();
    
private:
    
    Situation* situation ;
    
};


#endif //LABO16_CONTROLLER_H
