# [期中题目，重新开放，不记分 题目3 Account类]

按照**给定的Account.h和main.cpp**实现一个Account类，其中：

* `id` , `balance` ,`annualInterestRate`分别代表该账户的标识id，余额以及年利率 ;
* 无参数的构造函数`Account()`将三个变量的值都设为0；
* 构造函数`Account(id_, balance_, annualInterestRate_)`将相关变量设定为指定值；
* 三个变量的get函数返回对应变量的值；set函数将变量设定为指定的值；
* `withDraw(amount)`从账户取出指定金额（金额为amount，若余额不足，则取出所有金额），并**输出相关信息**（与**取出的实际金额**和**取出后的账户余额**有关）；
* `deposit(amount)`将指定金额存入账户，并**输出相关信息**（与**账户余额**有关）；
* `transfer(account,amount)`将指定金额**从当前帐户转入account账户**，若余额不足，则转账失败；无论转账成功与否，皆**输出相关信息**

# Input

```
2121 500 3.87
300.0 600.0 603.4
300.0 300.0
```

# Output

```
Account ID 0, Balance 0.00, Annual Interest Rate 0.00
Account ID 2121, Balance 500.00, Annual Interest Rate 3.87
300.00$ has been withdrawn! Balance of account 2121 is 200.00
500.00$ has been withdrawn! Balance of account 2126 is 0.00  
603.40$ has been deposited! Balance of account 2126 is 603.40  
Transferring failed: balance of account 2121 is not enough!    
Account ID 2126, Balance 603.40, Annual Interest Rate 3.87     
300.00$ has been transferred! Balance of account 2126 is 303.40
Account ID 2121, Balance 500.00, Annual Interest Rate 3.87
```

# Hint

只提交`Account`类实现，不要提交`main()`函数。

