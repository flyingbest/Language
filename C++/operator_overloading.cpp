#include <iostream>
using namespace std;

class NUMBOX{
private:
	int num1, num2;

public:
	NUMBOX(int num1, int num2) : num1(num1), num2(num2){}
	void showNumber(){
		cout << "num1 : " << num1 << " , num2 : " << num2 << endl;
	}
	/*
	NUMBOX operator+(NUMBOX &ref){
		return NUMBOX(num1+ref.num1, num2+ref.num2);
	}
	*/
	NUMBOX operator+(int num){
		return NUMBOX(num1+num, num2+num);
	}
	friend NUMBOX operator+(int num, NUMBOX ref);
};

NUMBOX operator+(int num, NUMBOX ref){
	ref.num1 += num;
	ref.num2 += num;
	
	return ref;
}

int main(){
	NUMBOX nb1(10, 20);
	//NUMBOX nb2(5, 2);
	//NUMBOX result = nb1 + nb2;
	//NUMBOX result = nb1.operator+(nb2);

	NUMBOX result = 10 + nb1 + 40;	

	nb1.showNumber();
	//nb2.showNumber();
	result.showNumber();

	return 0;
}
