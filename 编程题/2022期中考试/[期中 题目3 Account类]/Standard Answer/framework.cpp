#include "Account.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

void print(const Account& account) {
  cout << "Account ID " << account.getId() 
       << fixed << setprecision(2)
       << ", Balance " << account.getBalance() 
       << ", Annual Interest Rate " << account.getAnnualInterestRate()
       << endl;
}
int main() {
  //default construst account a
  Account a;
  print(a);
 

  int b_id;
  double b_balance, b_rate;
  cin >> b_id >> b_balance >> b_rate;
  Account b(b_id, b_balance, b_rate);
  Account c(b_id+5, b_balance, b_rate);
  print(b);
  double b_withdraw, c_withdraw, c_deposit;
  cin >> b_withdraw >> c_withdraw >> c_deposit;
  b.withDraw(b_withdraw);
  c.withDraw(c_withdraw);
  c.deposit(c_deposit);

  double b_trans_c, c_trans_b;
  cin >> b_trans_c >> c_trans_b;
  b.transfer(c,b_trans_c);
  print(c);
  c.transfer(b,c_trans_b);
  print(b);
  
  return 0;
}



