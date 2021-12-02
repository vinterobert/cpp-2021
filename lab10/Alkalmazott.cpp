//
// Created by vince on 12/2/2021.
//

#include "Alkalmazott.h"

int Alkalmazott::counter = 0;

int Alkalmazott::getId() const {
    return id;
}

Alkalmazott::Alkalmazott(const string vezetekNev, const string keresztNev, int szuletesiEv, const string munkakor)
        : Szemely(vezetekNev,
                  keresztNev,
                  szuletesiEv),
          munkakor(munkakor),
          id(++counter) {

}

void Alkalmazott::print(ostream &os) const {
    os << "id: " << this->getId() << endl;
    Szemely::print(os);
    os << this->munkakor;
}


