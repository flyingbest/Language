/*
	클래스는 상태와 행동.
	즉, 멤버 변수와 멤버 함수로 이루어진다.
*/

#include <iostream>
#include <string>
using namespace std;

typedef class student{
private:
	string name;
	int age;
	string hobby;

public:
	void showInfo();
	void setInfo(string _name, int _age, string _hobby);
	void study();
	void sleep();
} Student;

void Student::showInfo(){
	cout << "name : " << name << endl;
	cout << "age : " << age << endl;
	cout << "hobby : " << hobby << endl;
}

void Student::setInfo(string _name, int _age, string _hobby){
	name = _name;
	age = _age;
	hobby = _hobby;
}

void Student::study(){
	cout << "Study!!" << endl;
}

void Student::sleep(){
	cout << "Sleep!!" << endl;
}

int main(){
	Student stu;

	stu.setInfo("hong, gil-dong", 20, "computer game");
	stu.showInfo();
	
	for(int i=0; i<3; i++){
		stu.study();
		stu.sleep();
	}
	
	return 0;
}
