#include<stdio.h>
int main() {
	int var;

	printf("0���� ũ�� 10���� ���� ���� �Է� : ");
	scanf("%d", &var);
	if (var > 0 && var <10) {
		printf("%d�� 0���� ũ�� 10���� ���� ���� �Դϴ�.\n", var);
	}
	else if( var <=0 || var >=10 ){
		printf("%d�� 0���� ũ�� 10���� ���� ������ �ƴմϴ�.\n",var);
	}



	getch();
	return 0;
}

