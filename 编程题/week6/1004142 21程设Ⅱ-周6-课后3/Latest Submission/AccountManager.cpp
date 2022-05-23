#include "AccountManager.hpp"
#include <iostream>
using namespace std;
int AccountManager::ManagerNumber = 0; //static成员，记录所有管理员总数 
AccountManager::AccountManager()
{
	accountNumber = new int; //记录当前开设的账户总数 
	*accountNumber = 0;
	SuperVipAccount = nullptr; //记录超级Vip账户 
}

AccountManager::AccountManager(const AccountManager& om)
{
	int con = 100;
	while (con)
	{
		accountlist[con] = om.accountlist[con];
		con--;
	}
	accountNumber = new int;
	*accountNumber = *om.accountNumber;
	SuperVipAccount = om.SuperVipAccount;
	ManagerNumber = om.ManagerNumber;
}

void AccountManager::open(string cn)
{
	int addcon = *accountNumber;
	accountlist[addcon] = Account(cn, 0);
	//cout << *accountNumber << endl;
	(* accountNumber)++;
}

void AccountManager::close(string cn)
{
	int dcon = *accountNumber; int flag = 0; int dp = 0;
	for (int i = 0; i < dcon; i++)
	{
		if (accountlist[i].getName() == cn)
		{
			flag = 1;
			dp = i;
		}
	}
	if (flag)
	{
		for (int i = dp; i < dcon - 1; i++)
		{
			accountlist[i] = accountlist[i + 1];
		}
		(* accountNumber)--;
	}
}

void AccountManager::depositByName(string cn, double de)
{
	int scon = *accountNumber;
	for (int i = 0; i < scon; i++)
	{
		if (accountlist[i].getName() == cn)
		{
			accountlist[i].deposit(de);
			//cout << "succeed deposit" << endl;
		}
	}
}

bool AccountManager::withdrawByName(string cn, double wd)
{
	int scon = *accountNumber; bool flag = false;
	for (int i = 0; i < scon; i++)
	{
		if (accountlist[i].getName() == cn)
		{
			flag = accountlist[i].withdraw(wd);
		}
	}
	return flag;
}

double AccountManager::getBalanceByName(string cn)
{
	int scon = *accountNumber;
	for (int i = 0; i < scon; i++)
	{
		if (accountlist[i].getName() == cn)
		{
			return accountlist[i].getBalance();
		}
	}
}

Account AccountManager::getAccountByName(string cn)
{
	int scon = *accountNumber;
	for (int i = 0; i < scon; i++)
	{
		if (accountlist[i].getName() == cn)
		{
			return accountlist[i];
		}
	}
}

void AccountManager::openSuperVipAccount(Account& ad)
{
	SuperVipAccount = &ad;
}

void AccountManager::closeSuperVipAccount()
{
	SuperVipAccount = NULL;
}

bool AccountManager::getBalanceOfSuperVipAccount(double& b) const
{
	//没有用，可不写
	return b;
}

int AccountManager::getAccountNumber() const
{
	return *accountNumber;
}

int AccountManager::getManagerNumber() const
{
	return ManagerNumber;
}

AccountManager::~AccountManager()
{
	delete accountNumber;
	if (SuperVipAccount != nullptr)
		delete SuperVipAccount;
	ManagerNumber --;
}
