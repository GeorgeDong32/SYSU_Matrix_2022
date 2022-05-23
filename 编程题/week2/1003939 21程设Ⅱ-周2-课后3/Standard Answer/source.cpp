#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
 int N;
 string name, code;
 double cost;
 cin >> N;
 while(N--) {
  cin >> name >> code >> cost;
  cout << setw(15) << left << name <<
       setw(15) << left << code <<
       setw(10) << right << setprecision(2) << fixed << cost << endl;
 }
}
