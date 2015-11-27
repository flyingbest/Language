/*
	참조자(Reference, 레퍼런스)는 간단히 말해서 변수에 또 하나의
	별명을 붙여주는 것.
	할당된 어느 메모리 공간에 이름에, 둘 이상의 이름을 부여하는
	것이므로 대상이 이름이 존재하지 않을 경우에는 참조할 수 없음.
*/
#include <iostream>
using namespace std;

int main(){
	int num = 50;
	int &num1 = num;

	cout << "num addr : " << &num << endl;
	cout << "num1 addr : " << &num1 << endl;
	cout << endl;
	cout << "num val : " << num << endl;
	cout << "num1 val : " << num1 << endl;
	
	return 0;
}
