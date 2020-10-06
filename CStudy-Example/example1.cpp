#include <stdio.h>

int main() {
	//두 개의 정수입력 후 합을 표현하는 방법 
	int a, b;
	
	printf("a와 b를 차례로 입력: ");
	scanf("%d %d", &a, &b);
	
	printf("a = %d, b = %d, a + b = %d\n", a, b, a+b);
	
	//또 다른 방법
	int sum = a + b;
	printf("a = %d, b = %d, a + b = %d\n", a, b, sum);
	
	return 0;
}
