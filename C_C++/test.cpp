#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

	/*
	printf("size of int : %d\n", sizeof(int));	
	printf("size of float : %d\n", sizeof(float));
	printf("size of double : %d\n", sizeof(double));
	printf("size of char : %d\n", sizeof(char));
	printf("size of string : %d\n", sizeof(string));
	*/

	int array[2][5];
	int size;

	size = sizeof(array)/sizeof(array[0]);
	cout << "배열 행(col) 의 개수 : " << size << endl;
	size = sizeof(array[0])/sizeof(array[0][0]);
	cout << "배열 열(row) 의 개수 : " << size << endl;
	size = sizeof(array)/sizeof(array[0][0]);
	cout << "배열 총 개수 : " << size << endl;

	int i;
	int *pi;
	int **ppi;
	
	i = 1234;
	pi = &i;
	ppi = &pi;

	cout << "**ppi : " << **ppi << endl;
	

	return 0;
}

