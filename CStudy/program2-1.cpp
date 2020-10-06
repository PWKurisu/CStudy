#include <stdio.h>

int main() {
	int num1 = 10, num2 = 5;
	
	printf("num1의 초깃값은 %d이다.\n", num1);
	printf("num2의 초깃값은 %d이다.\n", num2);
	
	//num1의 값에 새로운 정숫값을 저장한다.
	num1 = 20; 
	//num2의 값에 새로운 정숫값을 저장한다.
	num2 = 30;
	
	printf("num1의 새로운 값은 %d이다.\n", num1);
	printf("num2의 새로운 값은 %d이다.\n", num2);
	
	return 0;
}
