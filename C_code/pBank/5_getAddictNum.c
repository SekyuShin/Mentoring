//중복된 값 찾기

#include<stdio.h>

int main() {
	char ch[] = { 'a','a','c','d','e','f','a','e','z','a' };
	int i,count=0;

	
	for (i = 0; i < sizeof(ch); i++) {
		if (ch[i] == 'a') count++;
	}printf("a의 중첩된 수는 : %d입니다.\n", count);


	getch();
	return 0;
}