//
// Created by Gaussian on 30.04.2018.
//

#include "Container.h"

Container::Container(const string& name) : _name(name) {}

const string& Container::name() const {
    return _name;
}

void Container::add(const Person* p) {
    _persons.push_back(p);
}

void Container::remove(const Person* p) {
    _persons.remove(p);
}

void Container::clear() {
    for (auto p :_persons) {
        remove(p);
    }
}

size_t Container::size() const {
    return _persons.size();
}

const list<const Person*>& Container::getPersons() const {
    return _persons;
}

const Person* Container::findPeople(const string& name) const {
    for (auto p : _persons ) {
        if (p->getName() == name) {
            return p;
        }
    }
    return nullptr;
}

ostream& operator << (ostream& os, const Container& c) {
    for (auto p : c._persons) {
        os << p->getName() + " ";
    }
    return os;
}

