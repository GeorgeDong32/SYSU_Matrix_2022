#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

class Account {
public:
    Account(int = 0, double = 0, double = 0);
    int getId() const;
    double getBalance()const; 
    double getAnnualInterestRate()const;
    double getMonthlyInterestRate()const;

    void setId(int);
    void setBalance(double);
    void setAnnualInterestRate(double);

    void withDraw(double);
    void deposit(double);

private:
    int id;
    double balance, annualInterestRate;
};          

#endif // FUNCTION_H_INCLUDED 