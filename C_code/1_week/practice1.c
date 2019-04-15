/*variable type*/

#include<stdio.h>

int main() {
	char char_var;
	int int_var;
	double double_var;
	
	printf("입력 : ");
	scanf("%c", &char_var);
	printf("char_type : %c \n", char_var);

	printf("정수형 자료형 입력 : ");
	scanf("%d", &int_var);
	printf("int_type : %d \n", int_var);

	printf("실수형 자료형 입력 : ");
	scanf("%lf", &double_var);
	printf("double_type : %lf\n", double_var);

	getch();
	return 0;
}