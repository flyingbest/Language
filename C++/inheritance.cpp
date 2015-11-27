#include <iostream>
#include <string>
using namespace std;

class Human{
private:
	int age;
	string name;
	string hobby;

public:
	Human(int _age, string _name, string _hobby) : age(_age){
	// :age(_age)
	// Human 생성자로 _age 인자가 넘어오면, Human 클래스 내의
	// 멤버 변수 age의 값을 _age로 초기화 시켜주는 역할.
	// Member Initializer(멤버 이니셜라이저) 를 이용한 초기화 방법.
		name = _name;
		hobby = _hobby;
	}
	void getup(){
		cout << "wake up!" << endl;
	}
	void study(){
		cout << "study!" << endl;
	}
	void showInfo(){
		cout << "name : " << name << endl;
		cout << "age : " << age << endl;
		cout << "hobby : " << hobby << endl;
	}
};

class Student : public Human{
private:
	string school;

public:
	Student(int _age, string _name, string _hobby, string _school) : Human(_age, _name, _hobby){
	school = _school;
	}
	void schoolInfo(){
		showInfo();	// 물려받아서 사용가능.(단, private의 멤버는 상속 안됨.)
		cout << "about school : " << school << endl;
	}
};

int main(){
	Student stu(20, "ansxodbs", "programming", "java highschool");

	stu.schoolInfo();

	stu.getup();
	return 0;
}

