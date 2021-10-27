//
// Created by vince on 10/7/2021.
//

#include "Stack.h"

void Stack::push(int e) {
    elements.insertFirst(e);
}

int Stack::pop() {
    elements.removeFirst();
}

bool Stack::isEmpty() {
    if(elements.empty()){
        return true;
    }
    return false;
}
