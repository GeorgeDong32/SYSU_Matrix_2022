#include <iostream>
#include <string>
using namespace std;

struct TaoBaoItem {
  int price;
  int volume_of_sales;
};

class SortInterface {
 public:
  virtual ~SortInterface() {};

  virtual void DoSort(TaoBaoItem item[], int size) = 0;
};

#include "source.h"

void printItem(TaoBaoItem arr[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << arr[i].price << " " << arr[i].volume_of_sales << endl;
  }
}

int main(int argc, char *argv[]) {
  TaoBaoItem item[4] = {
    {1, 2},
    {2, 3},
    {5, 1},
    {3, 10}
  };
  SortByPrice price;
  SortBySales sales;

  TaoBao taobao(&price); 
  taobao.sort(item, 4);
  printItem(item, 4);
  
  taobao.SetSortStrategy(&sales);
  taobao.sort(item, 4);
  printItem(item, 4);

  return 0;
}
