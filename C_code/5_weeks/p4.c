#include<stdio.h>
//���������� ���� ū�� ���ϱ�
int main() {
	int input;
	int i;
	
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &input);

	i = input;
	while (input % --i);
	printf("%d", i);
	
	getch();
	return 0;
}