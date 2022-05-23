#include <iostream>
using namespace std;

extern void TestObjects(int);

int main()
{
    int object_num;
    cin >> object_num;
    TestObjects(object_num);
    return 0;
}
