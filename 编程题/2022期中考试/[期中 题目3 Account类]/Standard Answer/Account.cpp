#include<iostream>
#include"Account.hpp"
using namespace std;

Account::Account() {
    id = 0;
    balance = 0;
    annualInterestRate = 0;
}
Account::Account(int id_ , double balance_ , double annualInterestRate_ ) {
    id = id_;
    balance = balance_;
    annualInterestRate = annualInterestRate_;
}
int Account::getId()const {
    return id;
}
double Account::getBalance()const {
    return balance;
}
double Account::getAnnualInterestRate()const {
    return annualInterestRate;
}

void Account::setId(int id_) {
    id = id_;
}
void Account::setBalance(double Balance) {
    balance = Balance;
}
void Account::setAnnualInterestRate(double AnnualInterestRate) {
    annualInterestRate = AnnualInterestRate;
}

void Account::withDraw(double amount) {
    if(amount <= balance){
        balance -= amount;
        cout << amount << "$ has been withdrawn! Balance of account " << id << " is " << balance <<endl;
    }else{
        amount = balance;
        balance = amount - balance;
        cout << amount << "$ has been withdrawn! Balance of account " << id << " is " << balance <<endl;
    }
}
void Account::deposit(double amount) {
    balance += amount;
    cout << amount << "$ has been deposited! Balance of account " << id << " is " << balance <<endl;
}
void Account:: transfer(Account & account, double amount){
    if(amount <= balance){
        balance -= amount;
        account.setBalance(amount+account.getBalance());
        cout << amount << "$ has been transferred! Balance of account " << id << " is " << balance <<endl;
    }else{
        cout << "Transferring failed: balance of account " << id << " is not enough!" << endl;
    }
}    