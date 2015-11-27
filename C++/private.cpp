/*
	private 상속을 하게 되면 private 제한자보다 접근 범위가
	넓은 멤버는 모두 private 제한자로 바꾸어 상속한다.
	즉, private보다 접근 범위가 넓은(public, protected)멤버들은
	모조리 private로 바뀌어 넘어간다.
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

class Base : private Parent{};

int main(){
	Base base;
	
	// error!!!
	cout << base.num1 << endl; 
	cout << base.num2 << endl;
	cout << base.num3 << endl;

	return 0;
}
