//
//  ChangeContainer.cpp
//  Labo 16 riviere
//
//  Created by Max Caduff on 23.05.18.
//  General Public Licence
//

#include "ChangeContainer.h"




//TODO: change includes!! (std:: ? )



bool ChangeContainer::checkAndMovePeople (Container* from, Container* to, const Person* p) {
    
    // ici on est sûrs que la personne est dans from et qu'il y a de la place dans to.
    from->remove(p);
    to->add(p);
    
    vector<int> countFrom = vector<int>(Person::NB_PERSON_TYPE, 0);
    vector<int> countTo = vector<int>(Person::NB_PERSON_TYPE, 0);

    
    for (auto pers : from->getPersons() ) {
        countFrom[pers->getType()] ++;
    }
    for (auto pers : to->getPersons() ) {
        countTo[pers->getType()] ++;
    }
    
    if (! (integrityCheck (countFrom) && integrityCheck (countTo))) {
        to->remove(p);
        from->add(p);
        return false;
    }
    return true;
}

bool ChangeContainer::integrityCheck(const vector<int>& v) const {
    
    
    if ( ! v.at(Person::PersonType::POLICEMAN)
        && v.at(Person::PersonType::THIEF)
        && ( v.at(Person::PersonType::MOTHER)
            || v.at(Person::PersonType::FATHER)
            || v.at(Person::PersonType::DAUGHTER)
            || v.at(Person::PersonType::SON) )) {
            cout << "### error: thief cannot stay with the family without the policeman.\n";
            return false;
    }
    
    if (! v.at(Person::PersonType::FATHER) && v.at(Person::PersonType::MOTHER)
         && v.at(Person::PersonType::SON)) {
        cout << "### error: Son cannot stay with mother without father.\n";
        return false;
    }
    
    if (! v.at(Person::PersonType::MOTHER) && v.at(Person::PersonType::FATHER)
        && v.at(Person::PersonType::DAUGHTER)) {
        cout << "### error: Daughter cannot stay with father without mother.\n";
        return false;
    }
    return true;
}

