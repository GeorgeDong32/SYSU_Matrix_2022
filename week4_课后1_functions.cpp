//Copyright (c) GeorgeDong32(Github). All rights reserved.
#include "functions.h"
#include <fstream>//has included the <iostream>
using namespace std;

int* Array(int len)
{
	int* re = new int[len];
	return re;
}

int** Reshape(int*vec, int row, int col)
{
	int* pr[100] = { NULL }; int con = 0;
	for (int i = 0; i < row; i++)
		pr[i] = new int[col];
	int** re = new int* [row];
	for (int i = 0; i < row; i++)
		*(re + i) = pr[i];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			*(*(re + i) + j) = *(vec + con);
			con++;
		}
	}
	return re;
}

void FreeArray(int* vec)
{
	delete[] vec;
}

void FreeMatrix(int** mat, int row)
{
	while (row)
	{
		delete[] * (mat + row - 1);
		row--;
	}
	delete[] mat;
}
