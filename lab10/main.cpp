//
// Created by vince on 12/2/2021.
//
#include <iostream>
#include "Alkalmazott.h"

using namespace std;

int main() {
    Szemely sz1("Nagy","Istvan",1998);
    cout << sz1;
    Alkalmazott a1("Kiss", "Pista", 1999, "sport");
    cout<< a1;
}