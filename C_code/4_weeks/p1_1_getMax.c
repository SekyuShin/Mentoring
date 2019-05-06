//최댓값 구하기_DownGrade.ver 
#include<stdio.h>

int main() {
	int max=0,temp;
	int input;
	printf("1번째 숫자를 입력하세요 \n");
	scanf("%d", &input);
	if (max < input) {
		max = input;
	}
	printf("2번째 숫자를 입력하세요 \n");
	scanf("%d", &input);
	if (max < input) {
		max = input;
	}
	printf("3번째 숫자를 입력하세요 \n");
	scanf("%d", &input);
	if (max < input) {
		max = input;
	}

	printf("max = %d\n", max);

	getch();
	return 0;
}