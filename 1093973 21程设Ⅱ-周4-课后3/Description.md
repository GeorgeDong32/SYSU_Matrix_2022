# 21程设Ⅱ-周4-课后3

# Description
Once an array is created, its size is fixed. Occasionally, you need to add more values to an array, but the array is full. In this case, you may create a new larger array to replace the existing array. Write a function with the following header:

```cpp
int * doubleCapacity(int *list, int size)
```

The function creates a new array that doubles the size of the parameter list, and copy the values in the list to the new array, the remaining value should to zero.

For example, the following codes outputs: `1 2 3 4 5 0 0 0 0 0`

```cpp
int list[5]={1,2,3,4,5};
int *newlist = doubleCapacity(list,5);

for(int i=0;i < 2*5;i++)
  cout << *(newlist+i) << " ";
```

# Hint

Don't submit the `main()` function.
