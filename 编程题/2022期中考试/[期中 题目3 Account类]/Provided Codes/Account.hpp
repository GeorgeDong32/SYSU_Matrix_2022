#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

class Account {
public:
    Account();
    Account(int id_ , double balance_ , double annualInterestRate_ );
    int getId() const;
    double getBalance()const;
    double getAnnualInterestRate()const;

    void setId(int id_);
    void setBalance(double balance_);
    void setAnnualInterestRate(double rate_);

    void withDraw(double amount);
    void deposit(double amount);
    void transfer(Account &account,double amount);

private:
    int id;
    double balance, annualInterestRate;
};

#endif // FUNCTION_H_INCLUDED 