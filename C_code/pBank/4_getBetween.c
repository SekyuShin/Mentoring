//사이에 낀 값들 구하기
// A와 E사이에 낀 값을 구하시오.
#include<stdio.h>

int main() {
	char ch[7] = { 'A','B','C','A','D','E','F' };
	int i;
	for (i = 0; i < 7; i++) {
		if (ch[i] == 'A') {
			if ((i + 2) < 7) {
				if (ch[i + 2] == 'E') {
					printf("사이에 낀 값은 = %c입니다.\n", ch[i + 1]);
					break;
				}
			}
		}
	}
	getch();
	return 0;
}