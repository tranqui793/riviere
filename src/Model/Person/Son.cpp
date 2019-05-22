//
//  Son.cpp
//  Labo 16 riviere
//
//  Created by Max Caduff on 20.05.18.
//  General Public Licence
//

#include "Son.h"


Son::Son (const string name) : Person(name, Person::PersonType::SON) {}

bool Son::canDrive() const {
    return false;
}
