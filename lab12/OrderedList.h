//
// Created by vince on 12/13/2021.
//

#ifndef CPP_2021_ORDEREDLIST_H
#define CPP_2021_ORDEREDLIST_H

#include <iostream>


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
    void insert(T &value) {
        Node *newNode = new Node(value);
        ++numElements;
        if (first == nullptr) {//ures lista
            first = newNode;
            return;
        }
        if(LessComp()(value,first->value)){//Elso elem ele kell beszurni
            newNode->next = first;
            first = newNode;
        }
        Node *prev = nullptr;
        Node *act = first;
        first = newNode;
        numElements++;
    }

    void listItems(ostream &os) const {
        Node *it = first;
        while (it != nullptr) {
            os << it->value << " ";
            it = it->next;
        }
    }

    friend ostream &operator<<(ostream &os, const OrderedList &list) {
        list.listItems(os);
        return os;
    }
};


#endif //CPP_2021_ORDEREDLIST_H
