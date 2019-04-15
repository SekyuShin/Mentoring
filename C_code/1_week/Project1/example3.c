#include<stdio.h>
int main() {
	double score;
	printf("점수 입력 : ");
	scanf("%lf", &score);

	if (score > 90 && score <= 100) {
		printf("점수는 %.1lf이고, 성적은 A입니다.\n", score);
	}
	else if (score > 80 && score <= 90) {
		printf(" 점수는 %.1lf이고,, 성적은 B입니다.\n", score);
	}
	else if (score > 70 && score <= 80) {
		printf("점수는 %.1lf이고,, 성적은 C입니다.\n", score);
	}
	else if (score >= 0 && score <= 70) {
		printf("점수는 %.1lf이고,, 성적은 F입니다.\n", score);
	}
	else if (score <0 || score >100) {
		printf("입력한 점수는 %.1lf이며, 잘못입력하였습니다.\n", score);
	}

	

	getch();
	return 0;
}

