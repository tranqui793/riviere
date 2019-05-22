//
//  PrintCmd.h
//  Labo 16 riviere
//
//  Created by Max Caduff on 20.05.18.
//  General Public Licence
//

#ifndef __Labo_16_riviere__PrintCmd__
#define __Labo_16_riviere__PrintCmd__

#include <iostream>
#include "Command.h"
/**
 * class to display the situation. it prints both sides of the river, 
 * the boat and the people in each container.
 */
class PrintCmd : public Command {
    
public:
    PrintCmd(Situation*);
    virtual bool execute (const string arg);


    virtual void printHelp() const;
    
private:
    const string DELIM = string (73 , '-') + '\n';
    const string RIVER = string (73 , '=') + '\n';
    
    
    
};

#endif /* defined(__Labo_16_riviere__PrintCmd__) */
