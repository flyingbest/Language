/*
	func 함수 내에는 예외를 처리하는 영역이 없기 때문에, func 함수가
	호출된 영역으로 예외를 전달한다.
	(참고로, 기본 데이터형(int, char.. )뿐만 아니라 객체(object)도 예외로
	던질 수 있다.)
*/

#include <iostream>
using namespace std;

void func(int a, int b){
	if(b == 0) throw b;
	cout << a << "를 " << b << "로 나눈 몫은 " << a/b << "입니다.\n";
}

int main(){
	int a, b;
	
	cout << "Enter the two number : ";
	cin >> a >> b;
	
	try{
		func(a, b);
	}	catch(int exception){
		cout << "예외 발생, 나누는 수는 " << b << "가 될 수 없습니다.\n";
	}
	
	return 0;
}
