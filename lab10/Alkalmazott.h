//
// Created by vince on 12/2/2021.
//

#ifndef CPP_2021_ALKALMAZOTT_H
#define CPP_2021_ALKALMAZOTT_H

#include <iostream>
#include "Szemely.h"

using namespace std;

class Alkalmazott : public Szemely {
public:
    Alkalmazott(const string vezetekNev, const string keresztNev, int szuletesiEv,const string munkakor);

    int getId() const;

    virtual void print(ostream &os) const;

protected:
    string munkakor;
    int id;
    static int counter;//id generalasra
};


#endif //CPP_2021_ALKALMAZOTT_H
