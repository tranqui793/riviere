//
//  Policeman.h
//  Labo 16 riviere
//
//  Created by Max Caduff on 20.05.18.
//  General Public Licence
//

#ifndef __Labo_16_riviere__Policeman__
#define __Labo_16_riviere__Policeman__

//#include <stdio.h>
#include "Person.h"

/**
 * Represents the policeman
 * Can drive the boat
 */
class Policeman : public Person {
    
public:
    Policeman(const string);
    virtual bool canDrive() const;

};

#endif /* defined(__Labo_16_riviere__Policeman__) */
