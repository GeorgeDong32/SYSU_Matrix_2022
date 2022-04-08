#include "check.h"
// #include <iostream>
#include <stdio.h>
#include "functions.h"

int main() {
	int* vec = nullptr;
	int len, row, col;
	scanf("%d", &len);	
	vec = Array(len);
	for (int i = 0; i < len; ++i) {
		scanf("%d", vec + i);	
	}
	int** mat = nullptr;
	scanf("%d%d", &row, &col);
	mat = Reshape(vec, row, col);
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			printf("%d%c", mat[i][j], j == col - 1 ? '\n' : ' ');
		}
	}
	FreeArray(vec);
	FreeMatrix(mat, row);
	return 0;
}