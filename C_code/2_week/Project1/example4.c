#include<stdio.h>
int main() {
	int schoolNum;
	double score;
	printf("�й� �Է� : ");
	scanf("%d", &schoolNum);

	if (schoolNum >= 20190000 && schoolNum <= 20199999) {
		printf("���� �Է� : ");
		scanf("%lf", &score);

		if (score > 90 && score <= 100) {
			printf("�й� %d�� ������ %.1lf�̰�, ������ A�Դϴ�.\n", schoolNum, score);
		}
		else if (score > 80 && score <= 90) {
			printf("�й� %d�� ������ %.1lf�̰�,, ������ B�Դϴ�.\n", schoolNum, score);
		}
		else if (score > 70 && score <= 80) {
			printf("�й� %d�� ������ %.1lf�̰�,, ������ C�Դϴ�.\n", schoolNum, score);
		}
		else if (score >= 0 && score <= 70) {
			printf("�й� %d�� ������ %.1lf�̰�,, ������ F�Դϴ�.\n", schoolNum, score);
		}
		else if (score <0 || score >100) {
			printf("�Է��� ������ %.1lf�̸�, �߸��Է��Ͽ����ϴ�.\n", schoolNum, score);
		}
	}
	else {
		printf("�߸��� �й� �Դϴ�.\n");
	}


	getch();
	return 0;
}

