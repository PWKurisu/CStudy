#include <stdio.h>
//pow() �Լ��� ����ϱ� ���� <math.h> ������ �����Ѵ�. 
#include <math.h>

int main() {
	short a, b;
	unsigned short c;
	
	a = pow(2, 15) - 1; //2^15 - 1 = 32767
	b = pow(2, 15); //2^15 = 32768
	c = pow(2, 15);
	
	printf("a�� ���� %d�̴�.\n", a);
	printf("b�� ���� %d�̴�.\n", b);
	printf("c�� ���� %d�̴�.\n", c);
	
	return 0;
}
