//
// Created by Gaussian on 18.05.2018.
//

#ifndef LABO16_FATHER_H
#define LABO16_FATHER_H


#include "Person.h"

/**
 * Represents a father in the family
 * Can drive the boat
 */
class Father : public Person {
public:
    explicit Father(const string name);
    virtual bool canDrive() const;

private:
};


#endif //LABO16_FATHER_H
