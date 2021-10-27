#include<iostream>
#include "Polynomial.h"

using namespace std;

int main() {
    double c1[]{1, 3, 4};
    Polynomial p1(2, c1);
    cout<< p1 << endl;
    cout<<"P1(0)="<<p1.evaluate(0)<<endl;
    cout<<"P1(1)="<<p1.evaluate(1)<<endl;
    return 0;
}

