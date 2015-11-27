#include <iostream>
#include <math.h>
using namespace std;

int func(int a){
	cout << "activate func(int a)!" << endl;
	return pow(a, 2);
}

int func(int a, int b){
	cout << "activate func(int a, int b)!" << endl;
	return a*b;
}

int main(){
	int result;
	
	result = func(4);	//16
	cout << "result : " << result << endl;
	result = func(3, 5);	//16
	cout << "result : " << result << endl;
	
	return 0;
}
