#include <stdio.h>
//별로 직사각형 만들기
int main(void) {
	int a;
	int b;
	int i, j;
	printf("가로 세로 입력 \n");
	scanf("%d %d", &a, &b);

	for (i = 0; i < b; i++) {
		for (j = 0; j < a; j++) {
			printf("*");
		}printf("\n");
	}

	getch();
	return 0;
}