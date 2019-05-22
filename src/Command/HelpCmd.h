//
//  HelpCmd.h
//  Labo 16 riviere
//
//  Created by Max Caduff on 20.05.18.
//  General Public Licence
//

#ifndef __Labo_16_riviere__HelpCmd__
#define __Labo_16_riviere__HelpCmd__

#include <stdio.h>
#include "Command.h"

/**
 * class that fetches all available classes and calls their printHelp() method.
 */
class HelpCmd : public Command {
    
public:
    HelpCmd(Situation*);
    virtual bool execute (const string arg);

    
    void printHelp() const;
    
};



#endif /* defined(__Labo_16_riviere__HelpCmd__) */
