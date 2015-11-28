/*
	A, B, C, D 란 클래스가 있다고 가정.
	이 상태에서 B 클래스가 A 클래스를 상속받고, C 클래스도 A 클래스를 상속
	받은 뒤에, D 클래스가 B와 C 클래스를 상속 받는 경우에 A 클래스가 두번
	상속되는 문제점이 있다. 즉, 다이아몬드 상속(Diamond inheritance)인 경우
	에는 가상 상속을 통햏 해결할 수 있다.
*/

#include <iostream>
using namespace std;

class ParentOne{
//private:
public:
	void funcone(){
		cout << "parentOne 클래스에서 funcone() called!" << endl;
	}
};

class ParentTwo{
public:
	void functwo(){
		cout << "parentTwo 클래스에서 functwo() called!" << endl;
	}
};

class Child : public ParentOne, public ParentTwo{
public:	
	void func(){
		funcone();
		functwo();
	}
};

int main(){
	Child child;

	child.func();
	
	return 0;
}

