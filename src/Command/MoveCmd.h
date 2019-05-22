//
//  MoveCmd.h
//  Labo 16 riviere
//
//  Created by Max Caduff on 20.05.18.
//  General Public Licence
//

#ifndef __Labo_16_riviere__MoveCmd__
#define __Labo_16_riviere__MoveCmd__

#include <stdio.h>
#include "Command.h"


/**
 * class to move the boat. It checks if someone on the boat can drive.
 */
class MoveCmd : public Command {
    
public:
    MoveCmd(Situation*);
    virtual bool execute (const string arg);
    
    virtual void printHelp() const;
    
};



#endif /* defined(__Labo_16_riviere__MoveCmd__) */
