//내림차순

#include<stdio.h>

int main() {
	int a[5] = { 1,6,4,3,2 };
	int i, j,temp;

	for (i = 0; i < 5; i++) {
		for (j = i; j < 5; j++) {
			if (a[i] < a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (i = 0; i < 5; i++) {
		printf("%d", a[i]);
	}printf("\n");

	getch();
	return 0;
}