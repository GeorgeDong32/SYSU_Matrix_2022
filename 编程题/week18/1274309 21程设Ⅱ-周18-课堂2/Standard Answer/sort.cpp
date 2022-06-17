#include <algorithm>
#include <vector>
#include "rational.h"
using std::vector;

void sortRational(vector<rational>& vec) {
    std::sort(vec.begin(), vec.end(), std::greater<rational>());
}