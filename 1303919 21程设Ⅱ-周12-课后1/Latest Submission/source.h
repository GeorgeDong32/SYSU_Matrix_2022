#pragma once
#include <iostream>
#include <string>
using namespace std;
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
class SortByPrice : public SortInterface {
public:
	virtual void DoSort(TaoBaoItem item[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size - 1; j++)
			{
				if (item[j].price < item[j + 1].price)
				{
					TaoBaoItem mid = item[j];
					item[j] = item[j + 1];
					item[j + 1] = mid;
				}
			}
		}
	}
};

class SortBySales : public SortInterface {
public:
	virtual void DoSort(TaoBaoItem item[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size - 1; j++)
			{
				if (item[j].volume_of_sales < item[j + 1].volume_of_sales)
				{
					TaoBaoItem mid = item[j];
					item[j] = item[j + 1];
					item[j + 1] = mid;
				}
			}
		}
	}
};

class TaoBao {
public:
	TaoBao(SortInterface* strategy) : strategy_(strategy) {}

	void SetSortStrategy(SortInterface* strategy)
	{
		strategy_ = strategy;
	}

	// Use current strategy_ to do the sort.
	void sort(TaoBaoItem item[], int size)
	{
		strategy_->DoSort(item, size);
	}

private:
	SortInterface* strategy_;
};
