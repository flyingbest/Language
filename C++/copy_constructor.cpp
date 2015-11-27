/*
	얕은 복사(Shallow Copy) : 멤버별 복사가 이루어지는 방식
*/

#include <iostream>
using namespace std;

class Myclass{
private:
	int num1;
	int num2;

public:
	Myclass(int a, int b){
		num1 = a;
		num2 = b;
	}
	void showData(){
		cout << "num1 : " << num1 << " num2 : " << num2 << endl;
	}
};

int main(){
	Myclass mc1(50, 40);
	Myclass mc2 = mc1;

	mc2.showData();
	return 0;
}
