/*
	매크로 함수 정의를 보면 복잡한 함수를 매크로 함수 형태로
	정의하는데 한계가 있다.
	장점이라고 한다면, 일반 함수에 비해 실행 속도가 빠르며,
	자료형에 영향을 받지 않는다.
*/

#include <iostream>
#define PI 3.141592
//#define CU(x) ((x)*(x)*(x))
using namespace std;

// 일반 함수의 형태에서 inline 이라는 키워드를 붙여주어
// 매크로 함수처럼 사용할 수 있다.

inline int CU(int x){
	return x*x*x;
}

int main(){
	cout << "PI : " << PI << endl;
	cout << "CU(x) = x * x * x : " << CU(7) << endl; 
	
	return 0;
}
