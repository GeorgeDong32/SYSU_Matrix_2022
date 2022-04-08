#ifndef _ACCOUNT_MANAGER_HPP_
#define _ACCOUNT_MANAGER_HPP_
#include "Account.hpp"
#include <string>
using std::string;

class AccountManager {
public:
 AccountManager();
 AccountManager(const AccountManager&); //拷贝构造函数 
 void open(string);
 void close(string);
 void depositByName(string,double);
 bool withdrawByName(string,double);
 double getBalanceByName(string);
 Account getAccountByName(string);
 void openSuperVipAccount(Account&); //开设超级Vip账户 
 void closeSuperVipAccount(); //关闭超级Vip账户 
 bool getBalanceOfSuperVipAccount(double&) const; 
 int getAccountNumber() const;
 int getManagerNumber() const;
 ~AccountManager(); //析构函数 
private:
 Account accountlist[100];
 int *accountNumber; //记录当前开设的账户总数 
 Account* SuperVipAccount; //记录超级Vip账户 
 static int ManagerNumber; //static成员，记录所有管理员总数 
};

#endif
