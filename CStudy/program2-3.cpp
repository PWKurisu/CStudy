#include <stdio.h>

int main() {
	float a = 12.34;
	double b = 45.6789;
	
	printf("float�� a�� ���� %f�̴�.\n", a);
	printf("double�� b�� ���� %lf�̴�.\n\n", b);

	//�Ҽ��� �ڸ����� �����ϸ� 
	printf("�Ҽ��� �ڸ����� ������ ���� ��\n");
	printf("float�� a�� ���� %.2f�̴�.\n", a);
	printf("double�� b�� ���� %.3lf�̴�.\n", b);
	
	return 0;
}

