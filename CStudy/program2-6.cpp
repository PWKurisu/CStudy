#include <stdio.h>

int main() {
	int a = 10, b =20, c;
	float d = 5.6, e = 8.4, f;
	
	c = d + e;
	printf("c = d + e�� �������� %.2f�̴�.\n", (float) c);
	
	f = d + e;
	printf("f = d + e�� �������� %.2f�̴�.\n", f);
	
	f = d + (int) e;
	printf("c = d + (int) e�� �������� %.2f�̴�.\n", f);
	
	return 0;
}