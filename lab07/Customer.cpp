#include "Customer.h"

int Customer::counter = 0;

Customer::Customer(const string &firstName, const string &lastName) {
    this->firstName = firstName;
    this->lastName = lastName;
    id = ++counter;
}

const string &Customer::getFirstName() const {
    return this->firstName;
}

void Customer::setFirstName(const string &firstName) {
    this->firstName = firstName;
}

const string &Customer::getLastName() const {
    return this->lastName;
}

void Customer::setLastName(const string &lastName) {
    this->lastName = lastName;
}

Account &Customer::getAccount(int id) {
    for (int i = 0; i < accounts.size() ; ++i) {
        if(this->accounts[i].getId() == id){
            return this->accounts[i];
        }
    }
    throw domain_error("Nincs ilyen id-val rendelkezo account");
}

int Customer::newAccount(double balance) {
    Account account(balance);
    accounts.push_back(account);
    return account.getId();
}

bool Customer::deleteAccount(int id) {
    for(auto it=accounts.begin(); it != accounts.end(); ++it){
        if(it->getId() == id){
            accounts.erase(it);
            return true;
        }
    }
    return false;
}

int Customer::getNumAccounts() const {
    return accounts.size();
}

void Customer::print(ostream &os) const {
    os << this->getId() << " " << this->getFirstName() << " " << this->getLastName() << endl;
    for (int i = 0; i < accounts.size() ; ++i) {
        os <<"\t Account Id: " << i << " balance: " << this->accounts[i].getBalance()<< endl;
    }
}
ostream& operator<<(ostream& os, const Customer& customer){
    customer.print(os);
    return os;
}

//Account &Customer::operator[](int index) {
//    return;
//}
//
//const Account &Customer::operator[](int index) const {
//    return;
//}
