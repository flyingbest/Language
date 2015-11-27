/////////////////////////////////////////////////////////
/*
	구조체는 여러 데이터를 한데 모아야 할 때 유용하게 사용가능.

	새로운 타입(구조체)의 필드에 접근하려면 변수의 이름 뒤에 점(.)을 추가하고
	해당 필드명을 붙인다. 

	*** 포인터와 구조체 ***

	포인터를 통해 구조체의 필드에 접근하려면 점(.)이 아닌 '->' 연산자를 사용한다.
	구조체의 필드는 저마다 메모리 주소가 다르다. 대개 구조체의 시작 위치부터 몇
	바이트씩 떨어지게 되는데, 특정 필드에 접근하는 데 필요한 오프셋을 정확하게
	계산해 주는 것이 바로 -> 다. 이와 더불어 -> 모든 문법에는 포인터의 모든
	특징 또한 고스란히 적용된다. 

		p_my_struct->my_field;
		(*p_my_struct).my_field;

	두 문법은 완벽히 일치한다.
*/
/////////////////////////////////////////////////////////
#include <iostream>
#include <string>
using namespace std;

struct student{
	int id;
	string name;
	float percentage;
};

int main(){
	/*
	struct student s = {1, "hong, gil dong", 90.5};
	cout << "id : " << s.id << endl;
	cout << "name : " << s.name << endl;
	cout << "percent : " << s.percentage << endl;
	*/

	student s = {1, "hong, gil dong", 90.5};
	cout << "id : " << s.id << endl;
	cout << "name : " << s.name << endl;
	cout << "percent : " << s.percentage << endl;

	return 0;
}
