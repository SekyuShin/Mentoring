#include<stdio.h>
//���ѹݺ����� �Ẹ��(feat. ASCII�ڵ�)
int main() {
	char a;

	while (1) {
		printf("input = ");
		scanf("%c", &a);
		printf("ASCII %c = %d\n",a, a);
	}

	getch();
	return 0;
}