#include "List.h"
#include <iostream>

using namespace std;

List::List() {
    this->first = nullptr;
}

List::~List() {
    Node *temp = first;
    while (temp != nullptr) {
        Node *next = temp->next;
        delete temp;
        temp = next;
    }
    nodeCounter = 0;
}

bool List::exists(int d) const {
    if (first == nullptr) {
        return false;
    }
    Node *it = first;
    while (it != nullptr) {
        if( it->value == d) {
            return true;
        }
    }
}




int List::size() const {
    return nodeCounter;
}

bool List::empty() const {
    if (nodeCounter == 0) {
        return true;
    } else {
        return false;
    }
}

void List::insertFirst(int d) {
    Node *newNode = new Node(d, first);
    first = newNode;
    nodeCounter++;
}

int List::removeFirst() {
    return 0;
}

void List::remove(int d, List::DeleteFlag df) {

}

void List::print() const {
    Node *it = first;
    cout << "[";
    while (it != nullptr) {
        cout << it->value << " ";
        it = it->next;

    }
    cout << "]" << endl;
}

