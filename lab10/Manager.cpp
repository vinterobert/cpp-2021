//
// Created by vince on 12/2/2021.
//

#include "Manager.h"

const string Manager::MANAGER_MUNKAKOR = "manager";

Manager::Manager(const string vezetekNev, const string keresztNev, int szuletesiEv, string munkakor) : Alkalmazott(
        vezetekNev, keresztNev, szuletesiEv,MANAGER_MUNKAKOR) {
}

void Manager::addAlkalmazott(Alkalmazott *alkalmazott) {
    beosztottak.push_back(alkalmazott);
}

void Manager::deleteAlkalmazott(int id) {
    for (int i = 0; i <beosztottak.size() ; ++i) {
        if(beosztottak[i]->getId() == id){
        beosztottak.erase(beosztottak.begin()+i);
        }
    }
}

void Manager::print(ostream &os) const {
    os << "Manager " << this->id << " " << this->vezetekNev << " " << this->keresztNev << " beosztottjai:" << endl;
    Alkalmazott::print(os);
}

int Manager::beosztottakSzama() const {
    return beosztottak.size();
}
