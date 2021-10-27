#include <iostream>
#include "List.h"

using namespace std;

int main() {
    List list;
    for(int i=0; i<10; ++i){
        list.insertFirst(i);
//        list.print();
    }
    return 0;
}



