#include <stdio.h>

int main() {
	//�� ���� �����Է� �� ���� ǥ���ϴ� ��� 
	int a, b;
	
	printf("a�� b�� ���ʷ� �Է�: ");
	scanf("%d %d", &a, &b);
	
	printf("a = %d, b = %d, a + b = %d\n", a, b, a+b);
	
	//�� �ٸ� ���
	int sum = a + b;
	printf("a = %d, b = %d, a + b = %d\n", a, b, sum);
	
	return 0;
}
