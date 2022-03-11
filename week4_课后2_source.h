//Copyright(c) GeorgeDong32(Github).All rights reserved.
#include <iostream>
using namespace std;

double** make_list(double data[], int size[])
{
	double* pall[20] = {NULL}; int countline = 0;
	int totalcon = 0;
	for (int i = 0; size[i] !=0; i++)
	{
		countline++;
		pall[i] = (double*)malloc(sizeof(double) * size[i]);
	}
	double** re = (double**)malloc(sizeof(double*) * (countline + 1));
	totalcon = 0;
	for (int i = 0; i < countline; i++)
	{
		for (int j = 0; j < size[i]; j++)
		{
			*(pall[i] + j) = *(data + totalcon);
			totalcon++;
		}
	}
	for (int i = 0; i < countline; i++)
	{
		*(re + i) = pall[i];
	}
	*(re + countline) = NULL;
	return re;
}

void free_lists(double* lists[])
{
	for (int i = 0; lists[i] != NULL; i++)
	{
		free(lists[i]);
	}
	free(lists);
}