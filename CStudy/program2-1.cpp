#include <stdio.h>

int main() {
	int num1 = 10, num2 = 5;
	
	printf("num1�� �ʱ갪�� %d�̴�.\n", num1);
	printf("num2�� �ʱ갪�� %d�̴�.\n", num2);
	
	//num1�� ���� ���ο� �������� �����Ѵ�.
	num1 = 20; 
	//num2�� ���� ���ο� �������� �����Ѵ�.
	num2 = 30;
	
	printf("num1�� ���ο� ���� %d�̴�.\n", num1);
	printf("num2�� ���ο� ���� %d�̴�.\n", num2);
	
	return 0;
}
