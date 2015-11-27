/*
	클래스 내에 생성자를 구현하지 않으면 C++ 컴파일러에서 그 클래스
	내에 디폴트 생성자라는 것을 알아서 넣어준다.
	아래와 같이 인자를 받지도 않고, 아무런 일도 하지 않는 생성자를..
	
		클래스 명() {}

	?????
	생성자 멤버변수 초기화 어떻게 하는지...?
	?????
*/

#include <iostream>
#include <string>
using namespace std;

class student{
private:
	string name;
	int age;
	string hobby;

public:
	student();
	student(string _name);
	student(string _name, int _age);
	student(string _name, int _age, string _hobby);
	void showInfo();
	void study();
	void sleep();
};

student::student(string _name, int _age, string _hobby){
	cout << "student( 3 parameter ) " << endl;
	name = _name;
	age = _age;
	hobby = _hobby;
}

student::student(string _name, int _age){
	cout << "student( 2 parameter ) " << endl;
	name = _name;
	age = _age;
}

student::student(string _name){
	cout << "student( 1 parameter ) " << endl;
	name = _name;
	age = 0;
}

student::student(){
	cout << "ExConstructor() called!" << endl;
	age = 0;
}

void student::showInfo(){
	cout << "name : " << name << endl;
	cout << "age : " << age << endl;
	cout << "hobby : " << hobby << endl;
}

void student::study(){
	cout << "Study!!" << endl;
}

void student::sleep(){
	cout << "Sleep!!" << endl;
}

int main(){
	student stu1;
	stu1.showInfo();
	student stu2("bill");
	stu2.showInfo();
	student stu3("hong, gil-dong", 16);
	stu3.showInfo();
	student stu4("ansxodbs", 20, "swimming");
	stu4.showInfo();
	return 0;
}

