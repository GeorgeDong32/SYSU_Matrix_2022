//Copyright(c) GeorgeDong32(Github).All rights reserved.
#include <stdlib.h>
int* doubleCapacity(int* list, int size)
{
	int newsize = 2 * size;
	int* re = (int*)malloc(sizeof(int) * newsize);
	for (int i = 0; i < size; i++)
	{
		*(re + i) = *(list + i);
	}
	for (int i = size; i < newsize; i++)
	{
		*(re + i) = 0;
	}
	return re;
}