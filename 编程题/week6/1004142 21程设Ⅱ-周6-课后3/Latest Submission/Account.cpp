#include "Account.hpp"

Account::Account()
{
	name = "";
	balance = 0;
}

Account::Account(string n, double b)
{
	name = n;
	balance = b;
}

void Account::deposit(double de)
{
	balance += de;
}

bool Account::withdraw(double wd)
{
	if(wd > balance)
		return false;
	else
	{
		balance -= wd;
		return true;
	}
}

string Account::getName() const
{
	return name;
}

double Account::getBalance() const
{
	return balance;
}