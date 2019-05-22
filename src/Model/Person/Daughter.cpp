//
//  Daughter.cpp
//  Labo 16 riviere
//
//  Created by Max Caduff on 20.05.18.
//  General Public Licence
//

#include "Daughter.h"


Daughter::Daughter (const string name) : Person(name, Person::PersonType::DAUGHTER) {}

bool Daughter::canDrive() const {
    return false;
}
