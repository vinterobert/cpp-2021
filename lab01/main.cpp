#include "Functions.h"
int main() {

    //feladat 1
    /*
    for (int i = 0; i < 128; ++i) {
        cout << countBits(i) << " ";
    }
    cout << endl;
    */

    //feladat 2
    /*
    int number = 7;
    cout << setBit(number, 1) << endl;
    cout << setBit(number, -8) << endl;
    cout << setBit(number, 2) << endl;
    */

    //feladat 3
    /*
    double array[] = { 10, 9, 8, 7, 5 };
    cout << mean(array, 0) << endl;
    cout << mean(array, 1) << endl;
    cout << mean(array, 5) << endl;
    */

    //feladat 4
    /*
    double array2[] = { 20, 10, 15, 14 };
    cout << "Szoras: " << stddev(array2, 4) << endl;
    */


    //feladat 5
    /*
    double array3[] = { 20, 10, 15, 14 };
    double* fel5 = max2(array3, 5);
    cout << "Result: " << "{" << fel5[0] << ", " << fel5[1] << "}" << endl;
    */

    //---------Karakterlancok--------

    //fel 1
    /*
    string str;
    cout << "String: ";
    getline(cin, str);
    cout << "Result: " << capitalizeWords(str);
    */

    //fel2

    string str1;
    cout << "String: ";
    getline(cin, str1);

    string coded = code(str1);
    cout << "\nCoded string: " << coded << endl;

    string decoded = decode(coded);
    cout << "\nDecoded string: " << decoded << endl;

    if (str1 == decoded) {
        cout << "\n\tMatch";
    }


    return 0;
}


