/*
	public 제한자보다 접근 범위가 넓은 멤버는 모두 public 제한자로
	바뀌어 상속되는데, public 보다 접근 범위가 넓은 것이 없으므로
	무엇 하나 바뀌지 않고 그대로 상속!!

	private < protected < public

*/

#include <iostream>
using namespace std;

class Parent{
private:
	int num1;
public:	
	int num2;
protected:
	int num3;
};

class Base : public Parent{};

int main(){
	Base base;
	
	cout << base.num1 << endl;	// error! 
	cout << base.num2 << endl;	// ok!
	cout << base.num3 << endl;	// error!

	return 0;
}
