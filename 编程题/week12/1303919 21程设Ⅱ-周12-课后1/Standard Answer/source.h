#ifndef SOURCE_H
#define SOURCE_H

class SortByPrice : public SortInterface {
 public:
  virtual void DoSort(TaoBaoItem item[], int size) {
   TaoBaoItem temp;
   for(int i = 0; i < size; i++) {
    for(int j = 0; j < size - i - 1; j++) {
     if(item[j].price < item[j + 1].price) {
      temp = item[j];
      item[j] = item[j + 1];
      item[j + 1] = temp;
     }
    }
   }
  }
};

class SortBySales : public SortInterface {
 public:
  virtual void DoSort(TaoBaoItem item[], int size) {
   TaoBaoItem temp;
   for(int i = 0; i < size; i++) {
    for(int j = 0; j < size - i - 1; j++) {
     if(item[j].volume_of_sales < item[j + 1].volume_of_sales) {
      temp = item[j];
      item[j] = item[j + 1];
      item[j + 1] = temp;
     }
    }
   }
  }
};

class TaoBao {
 public:
  TaoBao(SortInterface* strategy) {
   this->strategy_ = strategy;
  }

  void SetSortStrategy(SortInterface* strategy) {
   this->strategy_ = strategy;
  }

  // Use current strategy_ to do the sort.
  void sort(TaoBaoItem item[], int size) {
   this->strategy_->DoSort(item, size);
  }

 private:
  SortInterface *strategy_;
};

#endif