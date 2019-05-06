#include<stdio.h>
//구구단을 외자
int main() {
	int input;
	int i = 0;

	printf("원하는 단은? : ");
	scanf("%d", &input);
	if (input >= 2 && input <= 9) {
		for (i = 1; i <= 9; i++) {
			printf("%d * %d = %d\n", input, i, input*i);
		}
	}
	else {
		printf("잘못 입력하셨습니다.");
	}

	

	getch();
	return 0;
}