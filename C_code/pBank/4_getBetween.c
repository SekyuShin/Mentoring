//���̿� �� ���� ���ϱ�
// A�� E���̿� �� ���� ���Ͻÿ�.
#include<stdio.h>

int main() {
	char ch[7] = { 'A','B','C','A','D','E','F' };
	int i;
	for (i = 0; i < 7; i++) {
		if (ch[i] == 'A') {
			if ((i + 2) < 7) {
				if (ch[i + 2] == 'E') {
					printf("���̿� �� ���� = %c�Դϴ�.\n", ch[i + 1]);
					break;
				}
			}
		}
	}
	getch();
	return 0;
}