#include <stdio.h>

int main() {
	char name[20];
	printf("����� �̸��� �Է��ϼ��� : ");
	
	gets(name);
	puts(name);
	
	//���� �߰� 
	printf("����� �̸��� %s �Դϴ�.\n", name);
		
	return 0;
}
