//소수들 구하기 ex)17 => 2,3,5,7,11,13,17

#include<stdio.h>

int main() {
	int input;
	int i;

	printf("숫자 입력 : ");
	scanf("%d", &input);

	for (;input>1;input--) {
		i = input;
		while (input % (--i));
		
		if (i != 1) continue;
		else printf("%d\t", input);
	}
	

	getch();
	return 0;
}