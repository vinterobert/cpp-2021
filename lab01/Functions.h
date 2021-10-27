#ifndef CPP_2021_FUNCTIONS_H
#define CPP_2021_FUNCTIONS_H

using namespace std;

#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

int countBits(int);
int setBit(int&, int);
double mean(double array[], int numElements);
double stddev(double array[], int numElements);
double* max2(double array[], int numElements);
string code(string text);
string decode(string text);
string capitalizeWords(string text);

#endif //CPP_2021_FUNCTIONS_H