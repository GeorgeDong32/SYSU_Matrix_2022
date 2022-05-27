#include<iostream>
#include<string>
#include"source.h"
using namespace std;

int main(){
  
  int intArray[] =
  {
    1, 2, -7, 2, 5, 3, 1
  };
  for(int i=1; i<7; i++)
    cout << maxValue(intArray[0], intArray[i]) << endl;

  double doubleArray[] =
  {
    1.4, 2, 0.4, 2, 0.5, 3, 1
  };
  for(int i=1; i<7; i++)
    cout << maxValue(doubleArray[0], doubleArray[i]) << endl;



  string stringArray[] =
  {
    "abc", "ZBD", "ZbD", "abD", "Abc", "z*", "Z"
  };  
  for(int i=1; i<7; i++)
    cout << maxValue(stringArray[0], stringArray[i]) << endl;
  
  char charArray[] =
  {
    'A', 'c', 'b', 'a', 'Z', 'y', '*'
  };
  for(int i=1; i<7; i++)
    cout << maxValue(charArray[0], charArray[i]) << endl;
  
  
  return 0;
}
