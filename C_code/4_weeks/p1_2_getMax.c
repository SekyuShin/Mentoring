//최댓값 구하기
#include<stdio.h>

int main() {
	int max = 0, temp;
	int input,i;
	for (i = 0; i < 5; i++) {
		printf("%d번째 숫자를 입력하세요 \n",i+1);
		scanf("%d", &input);
		if (max < input) {
			max = input;
		}
	}
	printf("max = %d\n", max);

	getch();
	return 0;
}