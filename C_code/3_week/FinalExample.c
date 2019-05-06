#include<stdio.h>
//구구단을 외자
int main() {
	int start, end;
	int i = 0, j = 0;

	while (1) {
		
		printf("start = ");
		scanf("%d", &start);
		if (start < 2 || start>=10) {
			printf("잘못입력하셨습니다.start error \n");
			continue;
		}
		printf("end = ");
		scanf("%d", &end);
		if (end < 2 || end>=10) {
			printf("잘못입력하셨습니다.end error \n");
			continue;
		}
		if (start <= end) {
			for (i = start; i <= end; i++) {
				for (j = 1; j < 10; j++) {
					printf("%d * %d = %d\t", i, j, i*j);
				}printf("\n");
			}
			break;
		}
		else {
			printf("start가 end보다 큽니다.\n");
			continue;
		}
	}
	

	getch();
	return 0;
}