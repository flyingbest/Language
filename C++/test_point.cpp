#include <iostream>
using namespace std;

struct myBigStruct{  //메모리가 많이 필요한 구조체
	int x[100];
};

void takeStruct(myBigStruct& my_struct){
	my_struct.x[0] = 23;
}

int main(){
/*
	int x;
	int* px = &x;
	*px = 2;
	cout << x << endl;
*/
	struct myBigStruct super;
	
	for(int i=0; i<100; i++){
		cout << super.x[i] << " ";
	}
	cout << "\n============================\n";
	takeStruct(super);
	for(int i=0; i<100; i++){
		cout << super.x[i] << " ";
	}
	

	return 0;
}

