#include<stdio.h>
int main() {
	int var;

	printf("0보다 크고 10보다 작은 정수 입력 : ");
	scanf("%d", &var);
	if (var > 0 && var <10) {
		printf("%d는 0보다 크고 10보다 작은 정수 입니다.\n", var);
	}
	else if( var <=0 || var >=10 ){
		printf("%d는 0보다 크고 10보다 작은 정수가 아닙니다.\n",var);
	}



	getch();
	return 0;
}

