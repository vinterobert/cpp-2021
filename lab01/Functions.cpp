#include "Functions.h"
int countBits(int number) {
    int count = 0;

    while (number) {

        if ((number & 1) == 1) {
            ++count;
        }
        number >>= 1;
    }
    return count;
}

int setBit(int& number, int order) {

    if (order >= 0 && order <= 31) {
        number |= 1 << order;
        return 1;
    }
    return 0;
}

double mean(double array[], int numElements) {

    if (numElements == 0) {
        return NAN;
    }

    int s = 0;

    for (int i = 0; i < numElements; ++i) {
        s += array[i];
    }

    return (double)s / numElements;
}

double stddev(double array[], int numElements) {
    double avg = mean(array, numElements);

    for (int i = 0; i < numElements; ++i) {
        array[i] = pow(array[i] - avg, 2);
    }
    return sqrt(mean(array, numElements));
}

double* max2(double array[], int numElements) {
    double* result = new double(2);

    if (numElements == 0) {
        result[0] = result[1] = NAN;
        return result;
    }

    if (numElements == 1) {
        result[0] = result[1] = array[0];
        return result;
    }

    int largest = 0;
    int secondLargest = 0;

    for (int i = 0; i < numElements; ++i) {

        if (array[i] > largest) {
            largest = array[i];
        }
    }

    for (int i = 0; i < numElements; ++i) {

        if (array[i] > secondLargest) {

            if (array[i] == largest) {
                continue;
            }
            secondLargest = array[i];
        }
    }
    result[0] = secondLargest;
    result[1] = largest;

    return result;
}

string capitalizeWords(string text) {
    text[0] = toupper(text[0]);

    for (int i = 1; i < text.length(); ++i) {

        if (text[i - 1] == ' ') {
            text[i] = toupper(text[i]);
        }

        else {
            text[i] = tolower(text[i]);
        }
    }

    return text;
}

string code(string text) {

    for (int i = 0; i < text.length(); ++i) {

        if (text[i] >= 'a' && text[i] < 'z') {
            text[i] = text[i] + 1;
        }

        if (text[i] == 'z') {
            text[i] = 'a';
        }

        if (text[i] >= 'A' && text[i] < 'Z') {
            text[i] = text[i] + 1;
        }

        if (text[i] == 'Z') {
            text[i] = 'A';
        }
    }

    return text;
}

string decode(string text) {

    for (int i = 0; i < text.length(); ++i) {

        if (text[i] == 'a') {
            text[i] = 'z';
        }

        if (text[i] >= 'a' && text[i] < 'z') {
            text[i] = text[i] - 1;
        }

        if (text[i] == 'A') {
            text[i] = 'Z';
        }

        if (text[i] >= 'A' && text[i] < 'Z') {
            text[i] = text[i] - 1;
        }
    }

    return text;
}