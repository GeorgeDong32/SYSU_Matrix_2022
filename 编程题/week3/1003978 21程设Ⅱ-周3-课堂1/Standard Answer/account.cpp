// Problem#: 17645
// Submission#: 4642239
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<iostream>
#include<string>
#include"account.h"
using namespace std;

Account::Account(int ID , double BALANCE , double AnnualInterestRate ) {
    id = ID;
    balance = BALANCE;
    annualInterestRate = AnnualInterestRate;
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

void Account::setId(int ID) {
    id = ID;
}
void Account::setBalance(double Balance) {
    balance = Balance;
}
void Account::setAnnualInterestRate(double AnnualInterestRate) {
    annualInterestRate = AnnualInterestRate;
}

double Account::getMonthlyInterestRate()const {
    return annualInterestRate/12;
}
void Account::withDraw(double amount) {
    balance -= amount;
    if ( balance < 0 ) balance = 0;
}
void Account::deposit(double amount) {
    balance += amount;
}                     
              
