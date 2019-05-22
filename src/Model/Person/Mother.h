//
// Created by Gaussian on 18.05.2018.
//

#ifndef LABO16_MOTHER_H
#define LABO16_MOTHER_H

#include "Person.h"

/**
 * Represents the mother in the family
 * Can drive the boat
 */
class Mother : public Person {
public:
    explicit Mother(const string name);
    virtual bool canDrive() const;

private:
};


#endif //LABO16_MOTHER_H
