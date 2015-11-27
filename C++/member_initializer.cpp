/*
	멤버 이니셜라이저는,
	부모 클래스의 멤버 변수를 초기화 하기 위해서 생성자 함수를 호출한다던가,
	클래스 내의 변수를 초기화한다던가,
	const 변수를 초기화 할때도 사용된다.
	
	생성자의 몸체 부분보다 먼저 실행된다는 특징이 있다.
*/

#include <iostream>
using namespace std;

class memInit{
private:
	int num1;
	int num2;

public:
	memInit(int _num1, int _num2) : num1(_num1), num2(_num2) {
	}
	void showInfo(){
		cout << "num1 : " << num1 << ", num2 : " << num2 << endl;
	}
};

int main(){
	memInit mi(50, 70);
	
	mi.showInfo();
	return 0;
}
