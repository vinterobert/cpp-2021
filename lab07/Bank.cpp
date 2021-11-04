//
// Created by vince on 11/4/2021.
//

#include "Bank.h"

Bank::Bank(const string &name) {
    this->name = name;
}

int Bank::newCustomer(const string &firstName, const string &lastName) {
    Customer customer(firstName,lastName);
    customers.push_back(customer);
    return customer.getId();
}

bool Bank::deleteCustomer(int id) {
    for(auto it=customers.begin(); it != customers.end(); ++it){
        if(it->getId() == id){
            customers.erase(it);
            return true;
        }
    }
    return false;
}

Customer &Bank::getCustomer(int id) {
    for (int i = 0; i < customers.size(); ++i) {
        if(customers[i].getId() == id){
            return this->customers[i];
        }
    }
}

void Bank::printCustomers(ostream &os) const {
//    os << this->name << ": " <<endl;
//    for (int i = 0; i <  ; ++i) {
//
//    }
}

void Bank::printCustomersAndAccounts(ostream &os) const {

}

vector<int> Bank::loadCustomers(const string &filename) {
    return vector<int>();
}
