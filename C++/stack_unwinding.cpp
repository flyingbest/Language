/*
	예외를 처리하는 영역이 없어 이 예외가 호출된 영역을 타고 계속 전달되는
	현상을 갈리켜 스택 풀기(stack unwinding)이라고 한다.
*/

#include <iostream>
using namespace std;

void func1() { throw 0; }
void func2() { func1(); }
void func3() { func2(); }
void func4() { func3(); }

int main(){
	try{
		func4();
	} catch(int exception){
		cout << "예외 발생!, " << exception << " !" << endl;
	}
	return 0;
}
