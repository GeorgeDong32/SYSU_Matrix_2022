#include <iostream>
#include <cassert>

#include "my_macro.hpp"
#include "my_inline.hpp"

#include "check_macro.hpp"

using std::cout;
using std::cin;
using std::endl;

int main() {
  // Check if you really use a macro to do this
  CHECK_MACRO;

  int a = 0, b = 0;
  cin >> a >> b;
  cout << a << " " << b << endl;

  int res = inline_MAX(a, b);
  cout << "inline_MAX: " << res << endl;
  inline_SWAP(a, b);
  cout << "inline_SWAP: " << a << " " << b << endl;

  res = MACRO_MAX(a, b);
  cout << "MACRO_MAX: " << res << endl;
  MACRO_SWAP(a, b);
  cout << "MACRO_SWAP: " << a << " " << b << endl;
  
  return 0;
}