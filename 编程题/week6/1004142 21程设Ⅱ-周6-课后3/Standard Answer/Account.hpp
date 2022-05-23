#ifndef _ACCOUNT_HPP_
#define _ACCOUNT_HPP_
#include <string>
using std::string;

class Account {
public:
    Account();
    Account(string, double);
    void deposit(double);
    bool withdraw(double);
    string getName() const;
    double getBalance() const;
private:
    string name;
    double balance;
};

#endif
