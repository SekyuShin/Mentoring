#include<stdio.h>
//구구단 출력

int main() {
	int i, j;

	for (i = 2; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			printf("%d * %d = %d\t", i, j, i*j);
		}printf("\n");
	}

	getch();
	return 0;

}