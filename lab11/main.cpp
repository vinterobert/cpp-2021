//
// Created by vince on 12/8/2021.
//
#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <algorithm>
#include <stream>
#include <sstream>

using namespace std;

void upStr(string &);

int main() {
    map<string, set<int>> index;
    ifstream f("bemenet.txt");
    if (!f) {
        cout << "Hiba!";
    }
    string str;
    while (getline(f, str) && str.size()) {
        index.insert({str, set<int>()});
    }
//    for (auto pair: index) {
//        cout << pair.first << " ";
//    }
    string line;
    int lineCounter = 0;
    while (getline(f, str)) {
        getline(f,line);
        ++lineCounter;
        istringstream  iss(line);
        string word;
        while(iss >> word){

        }
    }

    for (auto pair: index) {
        cout << pair.first << " ";
        cout << pair.second.size() << endl;
    }

    return 0;
}

void upStr(string &str) {
    transform(str.begin(), str.end(), str.begin(),
              [](char ch) {
                  if (ch >= 'a' && ch <= 'z') { ch = ch - 32; }
                  return ch;
              });
}
