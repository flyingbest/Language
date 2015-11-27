/*
	virtual 을 쓰지 않았을 경우 모두 부모클래스의 func 호출을 하는데
	이유는 C++ 컴파일러가 실제로 가리키는 객체의 자료형을 기준으로 하는게
	아닌, 포인터 변수 자료형을 기준으로 판단하기 때문이다.

	실제로 가리키는 객체의 자료형에 따라 멤버 함수가 호출되도록 하려면
	virtual 키워드를 함수의 선언문에 붙여주면 쉽게 해결 가능.
	
	가상 함수로 선언되면, 실제로 가리키는 객체에 따라 실행되는 코드가 달라진다.
	참고로 부모 클래스에서 멤버 함수 선언문 앞에 virtual 키워드가 존재한다면,
	자식 클래스에서 오버라이딩(재정의) 한 함수도 저절로 가상 함수로 정의된다.
	그러나, 소스 코드의 이해를 돕기 위해 자식 클래스에서도 virtual을 명시해
	주는 것이 관례이다.

*/

#include <iostream>
using namespace std;

class Parent{
public:
	virtual void func(){
		cout << "부모클래스의 func 함수 호출!" << endl;
	}
};

class Child : public Parent{
public:
	virtual	void func(){
		cout << "자식클래스의 func 함수 호출!" << endl;
	}
};

int main(){
	Parent P, *pP;
	Child C;

	pP=&P;
	pP->func();
	
	pP=&C;
	pP->func();

	return 0;
}
