#include <iostream>
#include "Point.h"

using namespace std;

int main() {
    Point p1(2,3);
    cout<<"p1( "<<p1.getX()<<","<<p1.getY()<<")"<<endl;
    Point p2(100, 200);
    cout<<"p2( "<<p2.getX()<<","<<p2.getY()<<")"<<endl;
    Point * pp1 = new Point(300, 400);
    Point * pp2 = new Point(500, 1000);
    cout<<"pp1( "<<pp1->getX()<<","<<pp1->getY()<<")"<<endl;
    cout<<"pp2( "<<pp2->getX()<<","<<pp2->getY()<<")"<<endl;
    p1.print();
    p2.print();
    cout << "Ket pont kozotti tavolsag: " << distance(*pp1,*pp2) << endl;
    cout << "Ket pont kozotti tavolsag: " << distance(p1, p2) << endl;
    //10 10 30 10 20 0 20 20
    Point p3(10, 10);
    Point p4(30, 10);
    Point p5(20, 0);
    Point p6(20, 20);
    cout << "n= ";
    cout << isSquare(p3,p4,p5,p6) << endl;
    testIsSquare("points.txt");
    cout << endl;
    cout << "A random koordinatak: "<< endl << createArray(3) << endl;
    Point * pp3 = new Point;
    printArray(pp3,4);
    //sortPoints(pp3,4);
    delete pp1;
    delete pp2;
    return 0;
}


