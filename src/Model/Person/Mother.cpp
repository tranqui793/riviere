//
// Created by Gaussian on 18.05.2018.
//

#include "Mother.h"


Mother::Mother (const string name) : Person(name, Person::PersonType::MOTHER) {}

bool Mother::canDrive() const {
    return true;
}
