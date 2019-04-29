//break 문을 써보자
#include<stdio.h>

int main() {
	int var;

	while (1) {
		printf("var = ");
		scanf("%d", &var);
		if (var >= 1 && var < 10) {
			printf("input's var = %d\n", var);
			break;
		}
		else printf("wrong num \n");
	}
	
	getch();
	return 0;
}