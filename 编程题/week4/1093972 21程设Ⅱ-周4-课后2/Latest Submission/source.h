#pragma once
/*
Help Test
*/
#include <iostream>
using namespace std;
double** make_list(double data[], int sizes[])
{
    //cout << "in make_list" << endl;
    double** list = new double* [21];                //new一个存指针的数组
    int i = 0, cnt = 0;
    for (i = 0; sizes[i] != 0; i++)
    {
        list[i] = data + cnt;       //存下每行的指针
        cnt += sizes[i];            //记录下个指针的位置
    }
    list[i] = NULL;         //print_lists的终止判断条件 但是好像判断不了导致程序报错
    //cout << "out make_list" << endl;
    return list;
}

void free_lists(double* lists[])
{
    //cout << "in free_list" << endl;
    delete[] lists;
    //cout << "out free_list" << endl;
}