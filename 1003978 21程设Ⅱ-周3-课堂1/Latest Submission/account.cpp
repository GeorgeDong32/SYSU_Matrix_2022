#include <iostream>
using namespace std;
#include "account.h"

Account::Account (int i, double ba, double an)
{
	this->id = i;
	this->balance = ba;
	this->annualInterestRate = an;
}

void Account::deposit(double de)
{
	Account::balance += de;
}

void Account::withDraw(double wd)
{
	Account::balance -= wd;
}

void Account::setId(int i)
{
	Account::id = i;
}

void Account::setBalance(double bal)
{
	Account::balance = bal;
}

void Account::setAnnualInterestRate(double ai)
{
	Account::annualInterestRate = ai;
}

int Account::getId()const
{
	return Account::id;
}

double Account::getBalance()const
{
	double re = 0;
	re = Account::balance;
	return re;
}

double Account::getMonthlyInterestRate()const
{
	double re = 0;
	re =(double) Account::annualInterestRate / 12;
	return re;
}

double Account::getAnnualInterestRate()const
{
	return Account::annualInterestRate;
}