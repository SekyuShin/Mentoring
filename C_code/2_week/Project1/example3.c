#include<stdio.h>
int main() {
	double score;
	printf("���� �Է� : ");
	scanf("%lf", &score);

	if (score > 90 && score <= 100) {
		printf("������ %.1lf�̰�, ������ A�Դϴ�.\n", score);
	}
	else if (score > 80 && score <= 90) {
		printf(" ������ %.1lf�̰�,, ������ B�Դϴ�.\n", score);
	}
	else if (score > 70 && score <= 80) {
		printf("������ %.1lf�̰�,, ������ C�Դϴ�.\n", score);
	}
	else if (score >= 0 && score <= 70) {
		printf("������ %.1lf�̰�,, ������ F�Դϴ�.\n", score);
	}
	else if (score <0 || score >100) {
		printf("�Է��� ������ %.1lf�̸�, �߸��Է��Ͽ����ϴ�.\n", score);
	}

	

	getch();
	return 0;
}

