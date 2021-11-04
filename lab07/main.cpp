#include "Account.h"
#include "Customer.h"
#include "Bank.h"

using namespace std;

int main() {
    //fel1
//    Account account1;
//    Account account2(1000);
//    Account account3(2000);//1 parameteres konstruktor hivas
//
//    cout << account1 << endl;//operator<<(cout, account1)
//    cout << account2 << endl;
//    cout << account3 << endl;

    //fel2
//    Customer customer("Kiss", "Laci");
//    customer.newAccount(1000);
//    cout << customer << endl;
////    cout<<customer.getAccount(2);
//    customer.deleteAccount(1);
//    cout << customer << endl;
//
//    Customer customer1("Biro", "Tamas");
//    customer1.newAccount(0);
//    customer1.newAccount(1000);
//    cout << customer1 << endl;
    //fel3
    Bank bank1("BCR");
    bank1.newCustomer("Kiss","Laci");


}
