//소수 구하기 ex)17 => 2,3,5,7,11,13,17

#include<stdio.h>

int main() {
	int input;
	int i,j;

	printf("숫자 입력 : ");
	scanf("%d", &input);

	for (i = 2; i <= input; i++) {
		for (j = 2; j <= i; j++) {
			if (i%j == 0) {
				if (i != j) break;
				else printf("%d\t", j);
			}
		}
	}


	getch();
	return 0;
}