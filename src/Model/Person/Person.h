//
// Created by Gaussian on 30.04.2018.
//

#ifndef LABO16_PERSON_H
#define LABO16_PERSON_H


#include <string>

using namespace::std;

/**
 * Represents a person
 * Its subclasses must implement the visitable interface
 */
class Person {
    
public:
    enum PersonType {
        DAUGHTER = 0,
        SON,
        MOTHER,
        FATHER,
        POLICEMAN,
        THIEF,
        NB_PERSON_TYPE
    };
    
    explicit Person (const string name, const PersonType type) : name(name), type(type) {}
    virtual ~Person () {}

    /**
     * Returns the name of this person
     */
    const string& getName () const {
        return name;
    }
    /**
     * Returns true if this person can drive the boat
     * Pure virtual; must be implemented in the subclasses
     */
    virtual bool canDrive() const = 0;
    
    const PersonType getType () const {
        return type;
    }

private:
    const string name;
    const PersonType type;
    
    
};


#endif //LABO16_PERSON_H
