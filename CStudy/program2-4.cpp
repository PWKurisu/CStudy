#include <stdio.h>

int main() {
	int a = 20;
	float b = 5.05F, c = 12000.149F;
	
	printf("정수형의 다양한 출력 형태\n\n");
	
	printf("1) %d\n", a);
	printf("2) %6d\n", a);
	printf("3) %+6d\n", a);
	printf("4) %-6d\n\n\n", a);
	
	printf("실수형의 다양한 출력 형태\n\n");
	
	printf("1) %f\n", b);
	printf("2) %6.1f\n", b);
	printf("3) %+6.1f\n", b);
	printf("4) %6f\n", c);
	
	return 0;
}
