//
//  DebarkCmd.h
//  Labo 16 riviere
//
//  Created by Max Caduff on 20.05.18.
//  General Public Licence
//

#ifndef __Labo_16_riviere__DebarkCmd__
#define __Labo_16_riviere__DebarkCmd__

#include <stdio.h>
#include "Command.h"
#include "ChangeContainer.h"


/**
 * class to debark a person from the boat. It checks if the person
 * is on the boat and if the situation stays correct.
 */
class DebarkCmd : public Command, ChangeContainer {
    
public:
    DebarkCmd(Situation*);
    virtual bool execute (const string arg);
    virtual void printHelp() const;
};



#endif /* defined(__Labo_16_riviere__DebarkCmd__) */
