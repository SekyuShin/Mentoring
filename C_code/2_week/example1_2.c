#include<stdio.h>
//���� ����
int main() {
	char a;

	while (1) {
		printf("input = ");
		scanf("%c", &a);
		printf("ASCII %c = %d\n", a, a);
		while (getchar() != '\n');
	}



	getch();
	return 0;
}