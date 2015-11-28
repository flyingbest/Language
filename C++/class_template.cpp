/*
	함수 템플릿과 템플릿 함수, 클래스 템플릿과 템플릿 클래스의 차이점
	
	함수 템플릿은 함수를 만드는데 사용되는 템플릿이라는 의미.
	템플릿 함수는 템플릿을 기반으로 만들어진 함수.

	함수 템플릿은 템플릿을 강조하는 반면, 템플릿 함수는 함수를 강조.

	클래스도 마찬가지다.

*/

#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Data{
private:
	T data;
public:
	Data(T data) : data(data) { }
	void showInfo(){
		cout << data << endl;
	}
};

int main(){
	Data<int> data1(50);
	data1.showInfo();
	
	Data<char> data2('A');
	data2.showInfo();
	
	Data<double> data3(3.141592);
	data3.showInfo();
	
	Data<string> data4("ansxodbs");
	data4.showInfo();
	
	return 0;
}
