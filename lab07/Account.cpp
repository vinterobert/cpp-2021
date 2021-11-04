#include "Account.h"

int Account::counter{0};
//int Account::counter = 0; igy is jo

Account::Account(double balance) {
    if (balance >= 0) {
        this->balance = balance;
    } else {
        this->balance = 0;
    }
    counter++;
    this->id = counter;
}

void Account::deposit(double amount) {
    if (amount > 0) {
        this->balance += amount;
    }
}

bool Account::withdraw(double amount) {
    if (amount > this->balance) {
        return false;
    }
    this->balance -= amount;
    return true;
}

int Account::getId() const {
    return this->id;
}

double Account::getBalance() const {
    return this->balance;
}

void Account::print(ostream &os) const {
    os<< "ID= " << this->id << "\t (Balance= " <<this->balance << ")";
}

ostream &operator<<(ostream &os, const Account &account) {
    account.print(os);
    return os;
}
