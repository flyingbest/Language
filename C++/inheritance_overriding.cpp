/*
	오버로딩이 인자의 자료형이나 수가 다른 함수를 같은 이름으로 여러번
	중복 정의하는 것이라면,
	
	오버라이딩은 이미 있는 함수를 무시해버리고 새롭게 함수를 재정의하는
	것이다. 오버라이딩(Overriding, 재정의) 은 부모 클래스와 자식 클래스의
	상속 관계에서, 부모 클래스에 이미 정의된 함수를 같은 이름으로
	자식 클래스에서 재정의 하는 것을 의미.
	(이때, 부모의 멤버 함수와 원형이 완전히 같아야 한다. 그리고 오버라이딩 시
	부모 클래스의 함수가 모두 가려진다.)
	
*/
#include <iostream>
using namespace std;

class A{
public:
	void over(){
		cout << " A class 의 over 함수 called!" << endl;
	}
};

class B : public A{
public:
	void over(){
		A::over();
		cout << " B class 의 over 함수 called!" << endl;
	}
};

int main(){
	B b;
	b.over();
	
	return 0;
}
