//continue���� �Ẹ��
#include<stdio.h>

int main() {
	int start;
	int end;
	int i=0;
	

	while(1) {
		printf("start = ");
		scanf("%d", &start);
		printf("end = ");
		scanf("%d", &end);
		if (start > end) {
			printf("start�� end���� Ů�ϴ�.\n");
			continue;
		}
		for (i = start; i <= end; i++) {
			printf("%d\t", i);
		} printf("\n");
		break;
	}

	getch();
	return 0;
}