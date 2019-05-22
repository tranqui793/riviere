//
//  QuitCmd.h
//  Labo 16 riviere
//
//  Created by Max Caduff on 20.05.18.
//  General Public Licence
//

#ifndef __Labo_16_riviere__QuitCmd__
#define __Labo_16_riviere__QuitCmd__

#include <stdio.h>
#include "Command.h"

/**
 * class to stop the simulation.
 */
class QuitCmd : public Command {
    
public:
    QuitCmd(Situation*);
    virtual bool execute (const string arg);

    
    void printHelp() const;
    
};



#endif /* defined(__Labo_16_riviere__QuitCmd__) */
