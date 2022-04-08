#include "source.hpp"
#include <iostream>
using namespace std;

void printtotal(int total) {
  cout<<"Total in Main: "<<total<<endl;

}
int main() {

  int x, y, total;
  cin >> x >> y >> total;

  printtotal(total);
  addxy(x, y, total);

  printtotal(total);

  subxy(x, y, total);
  printtotal(total);
  return 0;
}
