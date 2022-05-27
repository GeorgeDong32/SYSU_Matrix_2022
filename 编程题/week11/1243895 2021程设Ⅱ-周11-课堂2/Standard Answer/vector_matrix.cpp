#include<cmath>
#include"vector_matrix.h"
Vector::Vector(){
    dimension = 0;
    elements = NULL;
}
Vector::Vector(int dim, const int* elements_) {
    dimension = dim;
    elements = new int[dim];
    for(int i=0;i<dim;i++)
        elements[i] = elements_[i];
}
int Vector::getDimension() const {
    return dimension;
}
int* Vector::getElements() const {
    return elements;
}
double Vector::getModule() const {
    int whole = 0;
    for(int i=0;i<dimension;i++)
        whole += elements[i]*elements[i];
    return sqrt(1.0*whole);
} 
Vector::~Vector()
{
    if(elements)
        delete []elements;
}

Matrix::Matrix(){
    row = 0;
}
Matrix::Matrix(int row_, int col_, const int* elements_):Vector(row_*col_, elements_),row(row_){}
bool Matrix::Symmetric() const {
    int col = getDimension()/row;
    if(row!=col) {
        return false;
    }
    int *elements = getElements();
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(elements[i*row+j] != elements[j*row+i])
            {
                return false;
            }
                
        }
    }
    return true;
}