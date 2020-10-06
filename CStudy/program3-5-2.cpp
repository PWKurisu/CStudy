#include <stdio.h>

int main() {
	int age = 0, birthyear = 0;
	
	printf("당신의 나이를 입력하세요.\n");
	scanf("%d", &age);
	printf("당신의 출생 연도를 입력하세요.\n");
	scanf("%d", &birthyear);
	
	printf("당신은 %d년에 출생한 %d세 입니다.\n", birthyear, age);
	
	return 0;
}
