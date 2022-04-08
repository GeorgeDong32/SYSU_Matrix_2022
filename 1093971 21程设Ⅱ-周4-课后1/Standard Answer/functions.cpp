#include "functions.h"

int* Array(int len) {
    int* vec = new int[len];
    return vec;
}

int** Reshape(int* vec, int row, int col) {
    int** mat = new int*[row];
    for (int i = 0; i < row; ++i) {
        mat[i] = new int[col];
        for (int j = 0; j < col; ++j) {
            mat[i][j] = vec[i * col + j];
        }
    }
    return mat;
}

void FreeArray(int* vec) {
    delete[] vec;
}

void FreeMatrix(int** mat, int row) {
    for (int i = 0; i < row; ++i) {
        delete[] mat[i];
	}
    delete[] mat;
}