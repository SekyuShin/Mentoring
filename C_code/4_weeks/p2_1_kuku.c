#include<stdio.h>
//�������� ����
int main() {
	int input;
	int i = 0;

	printf("���ϴ� ����? : ");
	scanf("%d", &input);
	if (input >= 2 && input <= 9) {
		for (i = 1; i <= 9; i++) {
			printf("%d * %d = %d\n", input, i, input*i);
		}
	}
	else {
		printf("�߸� �Է��ϼ̽��ϴ�.");
	}

	

	getch();
	return 0;
}