// practise_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int** createMatrix(int sizeX, int sizeY){
	int** matrix = new int *[sizeY];
	for (int i = 0; i < sizeY; i++){
		matrix[i] = new int[sizeX];
	}
	return matrix;
}

void initializeMatrix(int ** matrix, int sizeX, int sizeY){
	for (int i = 0; i < sizeY; i++){
		for (int j = 0; j < sizeX; j++){
			matrix[i][j] = rand() % 10;
		}
	}
}

void printMatrix(int ** matrix, int sizeX, int sizeY){
	for (int i = 0; i < sizeY; i++){
		for (int j = 0; j < sizeX; j++){
			cout << matrix[i][j] << '\t';
		}
		cout << endl;
	}
}

int countRowCol(int * row, int rowSize, int ** matrix2, int col){
	int tmp = 0;
	for (int i = 0; i < rowSize; i++){
		tmp += row[i] * matrix2[i][col];
	}
	return tmp;
}

int ** multiplyMatrix(int ** matrix1, int ** matrix2, int sizeX1, int sizeY1, int sizeX2, int sizeY2){
	int** matrix = createMatrix(sizeX1, sizeY2);
	if (sizeX1 != sizeY2){
		cout << "You can't multiply this matrixs!" << endl;
		return matrix;
	}
	for (int i = 0; i < sizeY1; i++){
		for (int j = 0; j < sizeX1; j++){
			matrix[i][j] = countRowCol(matrix1[i], sizeX1, matrix2, j);
		}
	}
	return matrix;
}

int* create1dArray(int sizeX, int sizeY){
	return new int[sizeX * sizeY];
}

void initialize1dMatrix(int * matrix, int sizeX, int sizeY){
	for (int i = 0; i < sizeY; i++){
		for (int j = 0; j < sizeX; j++){
			matrix[i * sizeX + j] = rand() % 10;
		}
	}
}

void print1dMatrix(int * matrix, int sizeX, int sizeY){
	for (int i = 0; i < sizeY; i++){
		for (int j = 0; j < sizeX; j++){
			cout << matrix[i * sizeX + j] << '\t';
		}
		cout << endl;
	}
}

int * multiply1dMatrix(int * matrix1, int * matrix2, int sizeX1, int sizeY1, int sizeX2, int sizeY2){
	int* matrix = create1dArray(sizeX1, sizeY2);
	if (sizeX1 != sizeY2){
		cout << "You can't multiply this matrixs!" << endl;
		return matrix;
	}
	for (int i = 0; i < sizeY1; i++){
		for (int j = 0; j < sizeX1; j++){
			int tmp = 0;
			for (int k = 0; k < sizeX1, k++){
			}
		}
	}
	return matrix;
}

int _tmain(int argc, _TCHAR* argv[])
{	
	int size;
	cout << "Set size of matrix" << endl;
	cin >> size;
	/*int ** matrix1 = createMatrix(size, size);
	initializeMatrix(matrix1, size, size);
	cout << "Matrix 1:" << endl;
	printMatrix(matrix1, size, size);
	int ** matrix2 = createMatrix(size, size);
	initializeMatrix(matrix2, size, size);
	cout << "Matrix 2:" << endl;
	printMatrix(matrix2, size, size);
	int ** matrix3 = multiplyMatrix(matrix1, matrix2, size, size, size, size);
	cout << "Multiple matrixs:" << endl;
	printMatrix(matrix3, size, size);
	return 0;*/


}

