//
//  Policeman.cpp
//  Labo 16 riviere
//
//  Created by Max Caduff on 20.05.18.
//  General Public Licence
//

#include "Policeman.h"


Policeman::Policeman (const string name) : Person(name, Person::PersonType::POLICEMAN) {}

bool Policeman::canDrive() const {
    return true;
}
