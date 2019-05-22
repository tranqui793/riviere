//
//  Command.h
//  Labo 16 riviere
//
//  Created by Max Caduff on 19.05.18.
//  General Public Licence
//

#ifndef __Labo_16_riviere__Command__
#define __Labo_16_riviere__Command__

#include <iostream>
#include <string>

class Situation;
using namespace std;


/**
 * Abstract class that represents a command to interact with the situation.
 * The commands are responsible of checking the integrity of the situation.
 */
class Command {
    
    
public:
    Command (Situation* situation);
    virtual ~Command() {}
    /** 
     * method called to execute the command, an argument string can be passed.
     * If an error occurs, execute should throw a string with a description
     * of the error, which will be intercepted by the controller.
     */
    virtual bool execute (const string arg) = 0;
    /**
     * method to display what the command does, it would be better if
     * it was returning a string but we have no time left!^^
     */
    virtual void printHelp() const = 0 ;
protected:
    Situation* s;
    
    
};

#endif /* defined(__Labo_16_riviere__Command__) */
