#include "vector_matrix.h"
#include <math.h>
Vector::Vector(): dimension(0) {
    elements = NULL;
}

Vector::Vector(int dim, const int* elements_): dimension(dim) {
    elements = new int[dim];
    for (int i = 0; i < dim; i++)
    {
        elements[i] = elements_[i];
    }
}

Vector::~Vector()
{
    if (elements != NULL)
        delete[] elements;
}

int Vector::getDimension() const
{
    return dimension;
}

int* Vector::getElements() const
{
    return elements;
}

double Vector::getModule() const
{
    double re = 0;
    double ns = 0;
    for (int i = 0; i < dimension; i++)
    {
        ns += (double) elements[i] * elements[i];
    }
    re = sqrt(ns);
    return re;
}

Matrix::Matrix(): row(0), Vector() {}

Matrix::Matrix(int r, int c, const int* e) :
    row(r), Vector(r*c, e) {}

bool Matrix::Symmetric() const
{
    int all = Vector::getDimension();
    int col = all / row;
    if (col != row)
    {
        return false;
    }
    int mid[100][100] = { 0, };
    int* mi = Vector::getElements();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mid[i][j] = mi[i*col + j];
        }
    }
    int flag = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mid[i][j] == mid[j][i])
            {
                flag *= 1;
            }
            else
            {
                flag = 0;
                return false;
            }
        }
    }
    return flag;
}
