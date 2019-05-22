//
//  ChangeContainer.h
//  Labo 16 riviere
//
//  Created by Max Caduff on 23.05.18.
//  General Public Licence
//

#ifndef __Labo_16_riviere__ChangeContainer__
#define __Labo_16_riviere__ChangeContainer__

#include <stdio.h>
#include "../Model/Boat.h"
#include "../Command/Command.h"
#include <vector>

/**
 * class to move a person from a container to another. It checks internally if
 * the state of the containers respects the rules. (see below.)
 */
class ChangeContainer {
    
protected:
    
    /**
     * this function puts the person in the destination container, then counts 
     * the number of people inside both containers, and calls integrityCheck 
     * to verify the state. If it is not correct, it removes the persons and 
     * throws a string with the error.
     */
    bool checkAndMovePeople (Container* from, Container* to, const Person* p);
    
private:
    /**
     * checks the number of people in the container to verify if :
     * - the thief is not with a family member without the policeman,
     * - the sons are not with their mother without their father,
     * - the daughters are not with their father without their mother.
     */
    bool integrityCheck(const vector<int>& v) const;
};




#endif /* defined(__Labo_16_riviere__ChangeContainer__) */
