//
//  Thief.cpp
//  Labo 16 riviere
//
//  Created by Max Caduff on 20.05.18.
//  General Public Licence
//

#include "Thief.h"


Thief::Thief (const string name) : Person(name, Person::PersonType::THIEF) {}

bool Thief::canDrive() const {
    return false;
}
