#include<stdio.h>

int main() {
	int sel;

	printf("1.(+), 2.(-), 3.(*), 4.(/) \n");
	scanf("%d", &sel);

	if (sel == 1) {
		printf("your selection is (+) \n");
	}
	else if (sel == 2) {
		printf("your selection is (-) \n");
	}
	else if (sel == 3) {
		printf("your selection is (*) \n");
	}
	else if (sel == 4) {
		printf("your selection is (/) \n");
	}




	getch();
	return 0;
}