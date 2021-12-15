//
// Created by vince on 12/2/2021.
//

#ifndef CPP_2021_SZEMELY_H
#define CPP_2021_SZEMELY_H

#include <iostream>

using namespace std;

class Szemely {
protected:
    string vezetekNev;
    string keresztNev;
    int szuletesiEv;
public:
    Szemely(string vezetekNev, string keresztNev, int szuletesiEv);

    virtual void print(ostream &os) const;

    friend ostream &operator<<(ostream &os, const Szemely &szemely);

};


#endif //CPP_2021_SZEMELY_H
