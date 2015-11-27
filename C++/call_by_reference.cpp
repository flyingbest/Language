#include <iostream>
using namespace std;

void swap(int &ref1, int &ref2){
	int tmp = ref1;
	ref1 = ref2;
	ref2 = tmp;
}

int main(){
	int a = 50, b = 40;
	
	cout << "swap before, a : " << a << " b : " << b << endl;
	swap(a, b);
	cout << "swap after, a : " << a << " b : " << b << endl;
	
	return 0;
}

