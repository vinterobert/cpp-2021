//
// Created by vince on 12/2/2021.
//

#ifndef CPP_2021_MANAGER_H
#define CPP_2021_MANAGER_H

#include <iostream>
#include <vector>
#include "Alkalmazott.h"

using namespace std;

class Manager : public Alkalmazott {
public:
    Manager(const string vezetekNev, const string keresztNev, int szuletesiEv, string munkakor);

    void addAlkalmazott(Alkalmazott* alkalmazott);


    void deleteAlkalmazott(int id);

    virtual void print(ostream &os) const;

    int beosztottakSzama() const;

protected:
    static const string MANAGER_MUNKAKOR;
    vector<Alkalmazott *> beosztottak;

};


#endif //CPP_2021_MANAGER_H
