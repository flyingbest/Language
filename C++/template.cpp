/*
	템플릿(Template) 이란, 말 그대로 '형틀'이라는 의미를 지니고 있다.

	기능은 이미 결정되어 있으나 자료형이 정해지지 않는다는 특징.

	함수 템플릿, 클래스 템플릿

*/

#include <iostream>
using namespace std;

// Swap 함수, 전달받은 변수의 실제 값을 바꿔야 하므로 레퍼러스(Reference,
// 참조자) 를 이용한 참조에 의한 호출(Call by reference).
template<typename T>
void Swap(T& num1, T& num2){
	T tmp = num1;
	num1 = num2;
	num2 = tmp;
}

int main(){
	int num1 = 10, num2 = 50;
	cout << "before, num1 : " << num1 << " , num2 : " << num2 << endl;
	Swap(num1, num2);
	cout << "after, num1 : " << num1 << " , num2 : " << num2 << endl;
	
	double num3 = 15.6, num4 = 14.44;
	cout << "before, num3 : " << num3 << " , num4 : " << num4 << endl;
	Swap(num3, num4);
	cout << "after, num3 : " << num3 << " , num4 : " << num4 << endl;

	return 0;
}
