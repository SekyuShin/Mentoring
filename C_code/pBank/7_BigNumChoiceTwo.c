//ū�� ����� 1924 => 94
#include<stdio.h>

int main() {
	int input,temp;
	int a[4];
	int i,j,result;
	printf("4�ڸ� ���ڸ� �Է��Ͻÿ� \n");
	scanf("%d", &input);

	if (input >= 1000 && input <= 9999) {
		a[0] = input / 1000;
		input %= 1000;
		a[1] = input / 100;
		input %= 100;
		a[2] = input / 10;
		a[3] = input % 10;

		for (i = 0; i < 4; i++) {
			for (j = i; j < 4; j++) {
				if (a[i] < a[j]) {
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		result = a[0] * 10 + a[1];
		printf("result = %d\n", result);
	}
	else {
		printf("�߸� �Է� �Ͽ����ϴ�.\n");
	}




	getch();
	return 0;
}