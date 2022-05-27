#ifndef VECTOR_MATRIX_H
#define VECTOR_MATRIX_H
#include<iostream>
using namespace std;
class Vector{
public:
    Vector();
    Vector(int dim, const int* elements_);
    ~Vector();
    
    int getDimension() const;
    int *getElements() const;
    double getModule() const;                             //求向量的模长
    
private:
    int dimension;                                  //向量的维度
    int *elements;                                  //存储向量元素的数组
};
class Matrix: public Vector{
public:
    Matrix();
    Matrix(int row, int col, const int* elements_);      //矩阵的行列以及矩阵元素（行优先方式存储在一维数组中）
    bool Symmetric() const;                              //判断是否为对称矩阵
private:
    int row;                                       //矩阵的行
};
#endif