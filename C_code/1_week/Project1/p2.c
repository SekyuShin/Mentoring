//printf를 사용해 보자

#include<stdio.h>

int main() {
	int month = 4;
	int day = 15;
	char weather[] = "맑음";
	double temperature = 17.2;

	printf("일시 : %d월 %d일, 날씨 :  %s, 온도 : %.2lf도 \n", month,day,weather,temperature);

	getch();
	return 0;
}