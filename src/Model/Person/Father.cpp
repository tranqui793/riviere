//
// Created by Gaussian on 18.05.2018.
//

#include "Father.h"


Father::Father (const string name) : Person(name, Person::PersonType::FATHER) {}

bool Father::canDrive() const {
    return true;
}
