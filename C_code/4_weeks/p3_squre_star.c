#include <stdio.h>
//���� ���簢�� �����
int main(void) {
	int a;
	int b;
	int i, j;
	printf("���� ���� �Է� \n");
	scanf("%d %d", &a, &b);

	for (i = 0; i < b; i++) {
		for (j = 0; j < a; j++) {
			printf("*");
		}printf("\n");
	}

	getch();
	return 0;
}