#include<iostream>
#include"vector_matrix.h"
using namespace std;

int main()
{
    int vector_dimension;
    cin >> vector_dimension;

    int* vector_elements = new int[vector_dimension];
    for(int i=0;i<vector_dimension;i++)
        cin >> vector_elements[i];
    
    int row, col;
    cin >> row >> col;
    int* matrix_elements = new int[row*col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            cin >> matrix_elements[i*row+j];
    }

    Vector v(row,vector_elements);
    cout<<"Vector Module: "<<v.getModule()<<endl;

    Matrix m(row,col,matrix_elements);
    cout<< "Total Elements in Matrix: " << m.getDimension()<<endl;
    cout<< "Symmetric matrix: "<<m.Symmetric()<<endl;
    return 0;
}