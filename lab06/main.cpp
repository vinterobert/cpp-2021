#include<iostream>
#include "Polynomial.h"

using namespace std;

int main() {
    double c1[]{1, 3, 4};
    Polynomial p1(2, c1);
    cout<< p1 << endl;
    cout<<"P1(0)="<<p1.evaluate(0)<<endl;
    cout<<"P1(1)="<<p1.evaluate(1)<<endl;
    cout<<"P2(2)="<<p1.evaluate(2)<<endl;
    Polynomial p2 = p1;
    cout<< p2 << endl;
    return 0;
}

