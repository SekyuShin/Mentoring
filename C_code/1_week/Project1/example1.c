
#include<stdio.h>
int main() {
	int var;

	printf("10보다 큰 정수 입력 : ");
	scanf("%d", &var);
	if (var > 10) {
		printf("%d는 10보다 큰 정수 입니다.\n",var);
	}
	else {
		printf("%d는 10보다 작거나 같은 정수 입니다.\n",var);
	}
	


	getch();
	return 0;
}

