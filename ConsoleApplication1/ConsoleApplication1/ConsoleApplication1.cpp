// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

const int N = 11;

void fillArray(int * array, int size){
	for (int i = 0; i < size; i++)
		array[i] = i;
}

void printArray(int * array, int size){
	for (int i = 0; i < size; i++){
		cout << array[i] << ' ';
	}
	cout << endl;
}

void switchElement(int * array, int src, int dest){
	int tmp = array[src];
	array[src] = array[dest];
	array[dest] = tmp;
}

void shakeArray(int * array, int size){
	int tmp;
	for (int i = 0; i < size; i++){
		if (i % 2 == 1){
			switchElement(array, i, i - 1);
		}
	}
	if (size % 2 == 1){
		switchElement(array, 0, N - 1);
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int array[N];
	fillArray(array, N);
	printArray(array, N);
	shakeArray(array, N);
	printArray(array, N);
}

