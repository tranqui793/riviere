//
//  Daughter.h
//  Labo 16 riviere
//
//  Created by Max Caduff on 20.05.18.
//  General Public Licence
//

#ifndef __Labo_16_riviere__Daughter__
#define __Labo_16_riviere__Daughter__

//#include <stdio.h>
#include "Person.h"

/**
 * Represents a daughter in the family
 * Cannot drive the boat
 */
class Daughter : public Person {
    
public:
    Daughter(const string) ;
    virtual bool canDrive() const;

};

#endif /* defined(__Labo_16_riviere__Daughter__) */
