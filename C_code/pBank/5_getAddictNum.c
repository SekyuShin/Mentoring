//�ߺ��� �� ã��

#include<stdio.h>

int main() {
	char ch[] = { 'a','a','c','d','e','f','a','e','z','a' };
	int i,count=0;

	
	for (i = 0; i < sizeof(ch); i++) {
		if (ch[i] == 'a') count++;
	}printf("a�� ��ø�� ���� : %d�Դϴ�.\n", count);


	getch();
	return 0;
}