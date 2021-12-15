
#include <cstdlib>
#include "OrderedList.h"
#include <iostream>
#include <string>

using namespace std;

struct Person {
    string fname;
    string lname;

    Person(string fname = "", string lname = "") : fname(fname), lname(
            lname) {}

    friend ostream &operator<<(ostream &os, const Person &p) {
        os << p.fname << " " << p.lname << endl;
        return os;
    }
};

struct PersonCompare {
    bool operator()(const Person &p1, const Person &p2) {
        if (p1.fname == p2.fname)
            return p1.lname < p2.lname;
        return p1.fname < p2.fname;
    }
};

int main(int argc, char **argv) {
//    OrderedList<int> list;
//    for(int i=0; i<10; ++i){
//    list.insert(i);
//    }
//    cout<< list;
//    return 0;
    OrderedList<int> l;
    for (int i = 0; i < 10; ++i) {
        int v = rand() % 10;
        l.insert(v);
    }
    cout<< l;
//    Iterator<int> it( l );
//    while( it.hasNext() ){
//        cout<<it.next()<<"\t";
//    }
//    for (int i = 0; i < 10; ++i) {
//        int t = rand() % 10;
//
//        cout << "\nTorlendo: " << t << endl;
//        l.remove( t );
//        l.listItems(cout);
//    }


}
