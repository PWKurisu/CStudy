#include <stdio.h>

int main() {
	int a = 10, b =20, c;
	float d = 5.6, e = 8.4, f;
	
	c = d + e;
	printf("c = d + e의 연산결과는 %.2f이다.\n", (float) c);
	
	f = d + e;
	printf("f = d + e의 연산결과는 %.2f이다.\n", f);
	
	f = d + (int) e;
	printf("c = d + (int) e의 연산결과는 %.2f이다.\n", f);
	
	return 0;
}
