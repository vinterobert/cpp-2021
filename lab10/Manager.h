//
// Created by vince on 12/2/2021.
//

#ifndef CPP_2021_MANAGER_H
#define CPP_2021_MANAGER_H

#include <iostream>
#include <vector>
#include "Alkalmazott.h"

using namespace std;

class Manager: public Alkalmazott{
public:
    Manager(const string vezetekNev, const string keresztNev, int szuletesiEv);

protected:
    vector<Alkalmazott *> beosztottak;

};


#endif //CPP_2021_MANAGER_H
