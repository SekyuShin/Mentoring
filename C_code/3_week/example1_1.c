#include<stdio.h>
//무한반복문을 써보자(feat. ASCII코드)
int main() {
	char a;

	while (1) {
		printf("input = ");
		scanf("%c", &a);
		printf("ASCII %c = %d\n",a, a);
	}

	getch();
	return 0;
}