#include "account.h"
#include <iostream>
#include <iomanip>
using namespace std;
void print(const Account& account) {
  cout << "Account ID " << account.getId() 
       << fixed << setprecision(2)
       << ", Balance " << account.getBalance() 
       << ", Monthly Interest Rate " << account.getMonthlyInterestRate()
       << endl;
}
int main() {
  //default construst account a
  Account a;
  print(a);
  int a_id;
  double a_balance, a_rate;
  cin >> a_id >> a_balance >> a_rate;
  //change data member of a
  a.setId(a_id);
  a.setBalance(a_balance);
  a.setAnnualInterestRate(a_rate);
  print(a);

  int b_id;
  double b_balance, b_rate;
  cin >> b_id >> b_balance >> b_rate;
  Account b(b_id, b_balance, b_rate);
  double b_withdraw, b_deposit;
  cin >> b_withdraw >> b_deposit;
  b.withDraw(b_withdraw);
  b.deposit(b_deposit);
  print(b);
  
  return 0;
}

