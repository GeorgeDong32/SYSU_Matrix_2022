#include "NameSpace.hpp"
void Handle() {
  owl::inflag--;
  mfc::inflag++;
  ::inflag %= 100;
}