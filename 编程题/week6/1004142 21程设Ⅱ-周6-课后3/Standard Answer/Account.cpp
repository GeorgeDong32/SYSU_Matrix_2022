#include "Account.hpp"
Account::Account() {}

Account::Account(string _name, double _balance) :
    name(_name), balance(_balance) {}

void Account::deposit(double num) {
    balance += num;
}

bool Account::withdraw(double num) {
    if (balance < num)
        return false;
    balance -= num;
    return true;
}

string Account::getName() const {
    return name;
}

double Account::getBalance() const {
    return balance;
}
