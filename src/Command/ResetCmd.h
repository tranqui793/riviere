//
//  ResetCmd.h
//  Labo 16 riviere
//
//  Created by Max Caduff on 20.05.18.
//  General Public Licence
//

#ifndef __Labo_16_riviere__ResetCmd__
#define __Labo_16_riviere__ResetCmd__

#include <stdio.h>
#include "Command.h"

/**
 * class to reset the situation.
 */
class ResetCmd : public Command {
    
public:
    ResetCmd(Situation*);
    virtual bool execute (const string arg);
    void printHelp() const;
    
};



#endif /* defined(__Labo_16_riviere__ResetCmd__) */
