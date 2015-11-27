#include <iostream>
using namespace std;

int main(){
	cout << "true : " << true << endl;
	cout << "sizeof true : " << sizeof(true) << " byte." << endl << endl;
	cout << "false : " << false << endl;
	cout << "sizeof false : " << sizeof(false) << " byte." << endl << endl;

	int a, b;
	bool isMax;
	
	cout << "Enter the two number : ";
	cin >> a >> b;
	
	if(a>b) isMax = true;
	else isMax = false;

	cout << "isMax : " << isMax << endl;
	return 0;
}

