//�ִ� ���ϱ�_DownGrade.ver 
#include<stdio.h>

int main() {
	int max=0,temp;
	int input;
	printf("1��° ���ڸ� �Է��ϼ��� \n");
	scanf("%d", &input);
	if (max < input) {
		max = input;
	}
	printf("2��° ���ڸ� �Է��ϼ��� \n");
	scanf("%d", &input);
	if (max < input) {
		max = input;
	}
	printf("3��° ���ڸ� �Է��ϼ��� \n");
	scanf("%d", &input);
	if (max < input) {
		max = input;
	}

	printf("max = %d\n", max);

	getch();
	return 0;
}