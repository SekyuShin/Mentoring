#include<stdio.h>
 //���ϴ� �����ܵ� ���

void KuKuDan(int var) {
	int i;
	for (i = 0; i < 9; i++) {
		printf("%d * %d = %d \t",var,i+1,var*(i+1));
	}printf("\n");
}

void Range(int valStart, int valEnd) {
	int i;
	for (i = valStart; i < valEnd + 1; i++) {
		KuKuDan(i);
	}
}

int Prove(int var) {
	if (var > 1 && var < 10) {
		return 0;
	}
	else {
		return 1;
	}
}

int main() {
	int start, end;

	printf("�������� ����\n");
	printf("���� : ");
	scanf("%d", &start);
	
	if (Prove(start)) {
		printf("���۰� ����\n");
		getch();
		return 0;
	}

	printf("�� : ");
	scanf("%d", &end);
	if (Prove(end)) {
		printf("���� ����\n");
		getch();
		return 0;
	}
	if (start <= end) {
		Range(start, end);
	}
	else {
		printf("���۰��� �������� Ů�ϴ�.\n");
	}
	

	getch();

	return 0;
}