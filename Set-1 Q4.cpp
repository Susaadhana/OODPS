/*Q4 – Operator Overloading
Sometimes two bank accounts are merged, and their balances must be combined.
Write a C++ program to overload the + operator so that two Account objects can be added to produce a new account with the combined balance.
Example:
Account total = acc1 + acc2;*/
#include <iostream>
using namespace std;

class Account {
    float balance;

public:
    Account(float b = 0) {
        balance = b;
    }

    Account operator+(Account a) {
        return Account(balance + a.balance);
    }

    void display() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account a1(3000), a2(2000);

    Account total = a1 + a2;

    total.display();

    return 0;
}