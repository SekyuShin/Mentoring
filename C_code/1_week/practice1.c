/*variable type*/

#include<stdio.h>

int main() {
	char char_var;
	int int_var;
	double double_var;
	
	printf("�Է� : ");
	scanf("%c", &char_var);
	printf("char_type : %c \n", char_var);

	printf("������ �ڷ��� �Է� : ");
	scanf("%d", &int_var);
	printf("int_type : %d \n", int_var);

	printf("�Ǽ��� �ڷ��� �Է� : ");
	scanf("%lf", &double_var);
	printf("double_type : %lf\n", double_var);

	getch();
	return 0;
}