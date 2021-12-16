//
// Created by vince on 12/13/2021.
//

#ifndef CPP_2021_ORDEREDLIST_H
#define CPP_2021_ORDEREDLIST_H

#include <iostream>
#include <functional>

using namespace std;

template<class T, class LessComp = less<T>, class Equal = equal_to<T> >
class OrderedList {
private:
    struct Node {
        T value;
        Node *next;

        Node(T value, Node *next = nullptr) : value(value), next(next) {}
    };

    Node *first;
    int numElements;
public:
    OrderedList() {
        numElements = 0;
        first = nullptr;
    }

    virtual ~OrderedList() {
        Node *temp = first;
        while (temp != nullptr) {
            Node *next = temp->next;
            delete temp;
            temp = next;
        }
        numElements = 0;
    }

//    bool isEmpty() {
//        if();
//    }

    void listItems(ostream &os) const {
        Node *it = first;
        while (it != nullptr) {
            os << it->value << " ";
            it = it->next;
        }
    }

//    friend ostream &operator<<(ostream &os, const OrderedList &list) {
//        list.listItems(os);
//        return os;
//    }

    void insert(T elem);
};

template<class T, class LessComp, class Equal>
void OrderedList<T, LessComp, Equal>::insert(T elem) {
    Node *newNode = new Node(elem);
    ++this->numElements;
    if (!first) {//ures lista
        first = newNode;
        return;
    }
    if (LessComp()(elem, first->value)) {//Elso elem ele kell beszurni
        newNode->next = first;
        first = newNode;
        return;
    }
    //beszuras ket elem koze vagy vegere
    Node *prev = nullptr;
    Node *act = first;
    while (act != nullptr && LessComp()(act->value, elem)) {
        prev = act;
        act = act->next;
    }
    prev->next = newNode;
    newNode->next = act;
};


#endif //CPP_2021_ORDEREDLIST_H
