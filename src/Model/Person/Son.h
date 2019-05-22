//
//  Son.h
//  Labo 16 riviere
//
//  Created by Max Caduff on 20.05.18.
//  General Public Licence
//

#ifndef __Labo_16_riviere__Son__
#define __Labo_16_riviere__Son__

//#include <stdio.h>
#include "Person.h"

/**
 * Represents a son in the family
 * Cannot drive the boat
 */
class Son : public Person {
    
public:
    Son(const string);
    virtual bool canDrive() const;

};

#endif /* defined(__Labo_16_riviere__Son__) */
