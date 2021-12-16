
#include <cstdlib>
#include "OrderedList.h"
#include <iostream>
#include <string>

using namespace std;


int main(int argc, char **argv) {
    OrderedList<int> li;
    //Ures listara
    li.insert(10);
    //Listafej ele
    li.insert(5);
    //Vegere
    li.insert(20);
    // Ket elem koze
    li.insert(15); li.listItems(cout);
}
