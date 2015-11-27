/*
	얕은 복사의 문제점
	mc1 선언과 동시에 생성자 내에서 str을 메모리에 할당.
	mc2 선언시 디폴트 복사 생성자가 호출.
	이때 메모리를 할당하지 않고 str의 포인터만 복사.
	그런 뒤에, mc2 객체가 먼저 소멸 mc2의 소멸자가 호출되고
	str을 메모리 공간에서 해제시킴.
	그리고 mc1 소멸자가 호출되어 str포인터가 가르키고 있는
	메모리 공간을 해제하려 하나, 이미 mc2의 소멸자에 의해 해제
	되어서 오류 발생!!!
*/
	
#include <iostream>
#include <string.h>
using namespace std;

class MyClass{
private:
	char* str;
	
public:
	MyClass(const char* astr){
		str = new char[strlen(astr)+1];
		strcpy(str, astr);
	}

	// deep copy를 위해 새로 넣은 코드
	MyClass(const MyClass& mc){
		str = new char[strlen(mc.str)+1];
		strcpy(str, mc.str);
	}

	~MyClass(){
		delete []str;
		cout << "~MyClass() called!" << endl;
	}
	void showdata(){
		cout << "str : " << str << endl;
	}
};

int main(){
	MyClass mc1("Myclass!!!!!");
	MyClass mc2 = mc1;

	mc1.showdata();
	mc2.showdata();

	return 0;
}

// 이를 해결하기 위해서는 포인터로 참조하는 대상까지 복사하는
// 깊은 복사(Deep Copy)가 필요!

// 메모리 공간 할당 후 문자열을 복사
// 그 다음에 할당된 메모리의 주소를 str에 저장


