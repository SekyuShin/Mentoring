//printf�� ����� ����

#include<stdio.h>

int main() {
	int month = 4;
	int day = 15;
	char weather[] = "����";
	double temperature = 17.2;

	printf("�Ͻ� : %d�� %d��, ���� :  %s, �µ� : %.2lf�� \n", month,day,weather,temperature);

	getch();
	return 0;
}