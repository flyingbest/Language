#include <iostream>
using namespace std;

int main(){
	int x;
	int* px = &x;

	*px = 2;

	cout << x << endl;
	return 0;
}

