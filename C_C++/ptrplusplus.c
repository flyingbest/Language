#include <stdio.h>

int main(){
	int ar[] = {10, 20, 30, 40, 50};
	int i, *ptr;
	
	ptr = ar;
	for(i = 0; i < 5; i++){
		printf("%d\n", *ptr++);
		// same :  
		// printf(%d\n", *ptr);
		// ptr++;
		//
	}
	return 0;
}

