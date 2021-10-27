//
// Created by vince on 10/7/2021.
//

#ifndef CPP_2021_STACK_H
#define CPP_2021_STACK_H


#include "List.h"

class Stack {
private:
    List elements;
public:
    void push(int e);
    int pop();
    bool isEmpty();
};



#endif //CPP_2021_STACK_H
