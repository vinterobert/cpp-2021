//
// Created by vince on 12/2/2021.
//
#include <iostream>
#include "Alkalmazott.h"
#include "Manager.h"

using namespace std;

int main() {
    Szemely sz1("Nagy","Istvan",1999);
    cout << sz1;
    Alkalmazott a1("Kiss", "Ervin", 1995, "edzo");
    cout << a1;
    Manager m1("Laszlo","Norbi",2001,"");
    cout << m1;
}