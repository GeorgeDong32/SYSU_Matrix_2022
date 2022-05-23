# 21程设Ⅱ-周6-课后3

# Description

`Account` 是一个银行账户的实体模型，它有一个属性 `balance` 表示当前的存款余额，有一个属性 `name` 表示账户名（不同的账户 `name` 是不同的），另有两个行为分别表示查询余额 `getBalance` 和查询用户名 `getName` 操作。

由于程序不仅需要管理某一位顾客的账户，而且还可能涉及大量的银行账户需要处理，所以还应建立一个名为“账户管理员”的实体模型，它负责执行每一账户的开设、撤销和访问等操作。每个账户管理员管理若干个账户，账户可能由多个账户管理员同时管理。

账户管理员 `AccountManager` 有一属性 `accountlist` 记录当前已开设的所有账户，`accountNumber` 为指针，其指向的值记录当前已开设的账户个数，`SuperVipAccount` 为对象指针，其指向的值为超级 Vip 账户，当管理员管理的账户里没有开设超级 Vip 账户时，指针指向 NULL。账户可以在不同银行开设，所以需要拷贝构造函数 `AccountManager(const AccountManager&)`，将所有信息移植给另外的管理员，注意深复制与浅复制的问题。管理员还有开设账户 `open`、开设超级 Vip 账户 `openSuperVipAccount`、关闭超级 Vip 账户`closeSuperVipAccount`、获取超级 Vip 账户余额 `getBalanceOfSuperVip`、获取账户总数 `getAccountNumber`、获取管理员总数 `getManagerNumber` 这些行为。

特别的，`getBalanceOfSuperVip` 有个 `double` 类型的引用参数，如果已经开设超级 Vip 则将其余额赋值给此参数，并且函数返回 `true`；否则参数的值不改变，函数返回 `false`。

**超级 Vip 是独立存在的，开设和关闭超级 Vip 的时候不需要改变 Manager 里的 accountlist 和 accountNumber。**

请实现如下 `Account` 和 `AccountManager` 类的定义，以完成该账户管理程序:

```cpp
class Account
{
  private:
    string name;
    double balance;
  public:
    Account();
    Account(string,double);
    void deposit(double); //存款
    bool withdraw(double); //取款
    string getName() const; //const成员函数，获取账户名 
    double getBalance() const; //const成员函数，获取账户余额 
};

class AccountManager
{
  private:
    Account accountlist[100];
    int *accountNumber; //记录当前开设的账户总数 
    Account* SuperVipAccount; //记录超级Vip账户 
    static int ManagerNumber; //static成员，记录所有管理员总数 
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
};
```

