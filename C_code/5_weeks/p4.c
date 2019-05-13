#include<stdio.h>
//나누어지는 가장 큰수 구하기
int main() {
	int input;
	int i;
	
	printf("숫자를 입력하세요 : ");
	scanf("%d", &input);

	i = input;
	while (input % --i);
	printf("%d", i);
	
	getch();
	return 0;
}