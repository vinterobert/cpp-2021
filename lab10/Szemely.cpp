//
// Created by vince on 12/2/2021.
//

#include "Szemely.h"

Szemely::Szemely(string vezetekNev, string keresztNev, int szuletesiEv) : vezetekNev(vezetekNev),
                                                                          keresztNev(keresztNev),
                                                                          szuletesiEv(szuletesiEv) {}

void Szemely::print(ostream &os) const {
    os << this->vezetekNev << " " << this->keresztNev << "(" << this->szuletesiEv << ")" << endl;
}

ostream &operator<<(ostream &os, const Szemely &szemely) {
    szemely.print(os);
    return os;
}
