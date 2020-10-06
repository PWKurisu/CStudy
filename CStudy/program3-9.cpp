#include <stdio.h>

int main() {
	char name[20];
	printf("당신의 이름을 입력하세요 : ");
	
	gets(name);
	puts(name);
	
	//예제 추가 
	printf("당신의 이름은 %s 입니다.\n", name);
		
	return 0;
}
