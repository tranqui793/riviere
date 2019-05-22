//
//  Thief.h
//  Labo 16 riviere
//
//  Created by Max Caduff on 20.05.18.
//  General Public Licence
//

#ifndef __Labo_16_riviere__Thief__
#define __Labo_16_riviere__Thief__

//#include <stdio.h>
#include "Person.h"

/**
 * Represents the thief
 * Cannot drive the boat
 */
class Thief : public Person {
    
public:
    Thief(const string);
    virtual bool canDrive() const;

};

#endif /* defined(__Labo_16_riviere__Thief__) */
