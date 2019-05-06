#include<stdio.h>

int main() {
	int result, a, b;

	printf("first variable : ");
	scanf("%d", &a);
	printf("second variable : ");
	scanf("%d", &b);

	result = a + b;

	printf("result = %d\n", result);
	
	getch();
	return 0;
}