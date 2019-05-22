//
// Created by Gaussian on 30.04.2018.
//

#ifndef LABO16_CONTAINER_H
#define LABO16_CONTAINER_H


#include "Person/Person.h"
#include <list>
#include <iostream>


/**
 * A person container
 */
class Container {
    
public:
    explicit Container(const string&);
    
    virtual ~Container() {}

    /**
     * Returns the name of this container
     */
    const string& name() const;
    /**
     * Returns the size of this container
     */
    size_t size() const;

    /**
     * Adds a person to this container
     */
    void add(const Person*);
    /**
     * Removes a person from this container
     */
    void remove(const Person*);
    /**
     * Removes all persons from this container
     */
    void clear();
    /**
     * Returns a list of persons that are in this container
     */
    const list<const Person*>& getPersons() const;
    /**
     * Finds and returns a person if it is in this container
     * @param name the name of the person to find
     * @return the person if it has been found, nullptr otherwise
     */
    const Person* findPeople(const string& name) const;
    
    friend ostream& operator << (ostream& os, const Container& c);
    
protected:
    list<const Person*> _persons;

private:
    string _name;
};


#endif //LABO16_CONTAINER_H
