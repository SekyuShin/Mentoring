//�ִ� ���ϱ�
#include<stdio.h>

int main() {
	int max = 0, temp;
	int input,i;
	for (i = 0; i < 5; i++) {
		printf("%d��° ���ڸ� �Է��ϼ��� \n",i+1);
		scanf("%d", &input);
		if (max < input) {
			max = input;
		}
	}
	printf("max = %d\n", max);

	getch();
	return 0;
}