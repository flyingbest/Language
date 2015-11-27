/*
	클래스와 클래스끼리 친구(friend) 관계를 형성할 수 있다.
	private 멤버는 외부에서 접근할 수 없다. 
	하지만 A클래스 내에서 B클래스를 친구로 지정하면,
	B클래스는 A클래스의 private 멤버에 직접 접근이 가능.
	하지만 A클래스에서는 B클래스의 private 멤버에 직접 접근이
	불가능하다. A클래스도 가능하게 해주기 위해서는, 
	B클래스 내에서도 A클래스를 대상으로 친구로 지정해줘야 한다.
*/

#include <iostream>
using namespace std;

class B;

class A{
private:
	int adata;

public:
	A(int _data){
		adata = _data;
	}
	void showdata(B &b);
	friend class B;
};

class B{
private:
	int bdata;

public:
	B(int _data){	
		bdata = _data;
	}
	void showdata(A& a){
		cout << "a.data : " << a.adata << endl;
	}
	friend class A;
};

void A::showdata(B &b){
	cout << "b.data : " << b.bdata << endl;
}

int main(){
	A a(10);
	B b(20);
	
	a.showdata(b);
	b.showdata(a);

	return 0;
}
