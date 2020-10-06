#include <stdio.h>

int main() {
	float a = 12.34;
	double b = 45.6789;
	
	printf("float형 a의 값은 %f이다.\n", a);
	printf("double형 b의 값은 %lf이다.\n\n", b);

	//소수형 자릿수를 조정하면 
	printf("소수점 자릿수를 조정한 후의 값\n");
	printf("float형 a의 값은 %.2f이다.\n", a);
	printf("double형 b의 값은 %.3lf이다.\n", b);
	
	return 0;
}

