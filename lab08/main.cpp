//
// Created by vince on 11/18/2021.
//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <utility>

using namespace std;

int main() {
    //feladat 1
    cout << "Feladat1: " << endl;
    string keresett = "berry";
    cout << "\n Keresett karakterlanc: " << keresett << endl;
    vector<string> fruits{
            "melon", "strawberry", "raspberry", "apple", "banana", "walnut", "lemon"
    };
    auto result1 = find_if(fruits.begin(), fruits.end(),
                           [&keresett](const string &e) {
                               return e.find(keresett) != string::npos;
                           });
    cout << "\t Van-e olyan gyumolcsnev, amely tartalmazza a megadott karakterlancot? \t -" <<
         ((result1 != fruits.end()) ? "Igen" : "Nem") << endl;

    //feladat 2
    cout << endl << "Feladat2: " << endl;
    vector<int> numbers{
            2, 4, 8, 12, 36
    };
    auto paros = all_of(numbers.begin(), numbers.end(),
                        [](const int &nums) {
                            return nums % 2 == 0;
                        });
    cout << "\t A tomb minden eleme: " << ((paros) ? "Paros" : "Nem paros") << endl;

    //feladat 3
    cout << endl << "Feladat3: " << endl;
    vector<int> numbers2{
            1, 2, 3, 4, 5
    };
    cout <<"\tTomb elemei: ";
    for (int i = 0; i < numbers2.size(); ++i) {
        cout<<numbers2[i]<< " ,";
    }
    auto megduplaz = for_each(numbers2.begin(), numbers2.end(),
                        [](int &nums) {
                            nums = nums*2;
                        });
    cout <<endl<< "\tMegduplazott tomb: ";
    for (int i = 0; i < numbers2.size(); ++i) {
        cout<<numbers2[i]<< " ,";
    }
    cout<< endl;
    //feladat 4
    cout << endl << "Feladat4: " << endl;
    vector<string> months {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
    };
    auto fel4 = count_if(months.begin(),months.end(),
                         [](const string& m){
                            return (m.length() == 5);
    });
    cout << "\t5 betubol allo honapok szama: " << fel4 << endl;

    //feladat 5
    vector<double> numbers3{
            10.3, 2.14, 123.21, 40.4, 5.50
    };
    cout<< "Eredeti tomb: ";
    for (int i = 0; i < numbers3.size(); ++i) {
        cout<< numbers3[i] << " ,";
    }

    return 0;
}

