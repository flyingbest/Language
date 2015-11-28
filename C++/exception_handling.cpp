/*
	예외처리
	try ~ catch( 시도하다 ~ 잡다 ), throw ( 던지다 )
	
	기본 형식
	try{	// 예외가 발생하는 영역
		if(예외조건) throw 예외 객체;	// 예외가 발생하면 예외를 던지는 영역
	}	catch(예외 객체) {	// 던져진 예외를 잡는 영역
		// 예외 처리 영역
	}

*/

#include <iostream>
using namespace std;

int main(){
	int a, b;
	
	cout << "Enter the two number : ";
	cin >> a >> b;
	
	try{
		if(b == 0) throw b;
		cout << a << "를 " << b << "로 나눈 몫은 " << a/b << "입니다.\n";
	}	catch(int exception){
		cout << " 나누는 수가 0이 될수는 없습니다.\n";
	}

	return 0;
}
