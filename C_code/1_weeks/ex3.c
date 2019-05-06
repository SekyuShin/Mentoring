#include<stdio.h>

int main() {
	int sel,result,a,b;

	printf("first variable : ");
	scanf("%d", &a);
	
	printf("1.(+), 2.(-), 3.(*), 4.(/) \n");
	scanf("%d", &sel);

	printf("second variable : ");
	scanf("%d", &b);

	if (sel == 1) {
		result = a + b;
		printf("%d + %d = %d \n",a,b,result);
	}
	else if (sel == 2) {
		result = a - b;
		printf("%d - %d = %d \n", a, b, result);
	}
	else if (sel == 3) {
		result = a * b;
		printf("%d * %d = %d \n", a, b, result);
	}
	else if (sel == 4) {
		result = a / b;
		printf("%d / %d = %d \n", a, b, result);
	}




	getch();
	return 0;
}