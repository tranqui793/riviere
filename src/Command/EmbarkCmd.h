//
//  EmbarkCmd.h
//  Labo 16 riviere
//
//  Created by Max Caduff on 20.05.18.
//  General Public Licence
//

#ifndef __Labo_16_riviere__EmbarkCmd__
#define __Labo_16_riviere__EmbarkCmd__

#include <iostream>
#include "Command.h"
#include "ChangeContainer.h"


/**
 * class to embark a person to the boat. It checks if the person is on 
 * the side, if the boat has space and if the situation stays correct.
 */
class EmbarkCmd : public Command, ChangeContainer {
    
public:
    EmbarkCmd(Situation*);
    virtual bool execute (const string arg);

    virtual void printHelp() const;
    
};

#endif /* defined(__Labo_16_riviere__EmbarkCmd__) */
