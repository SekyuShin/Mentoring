//�Լ��� ���¿� ���� �� ���ǹ��� �ݺ��� ����ؼ�
// ���� �����

//���� -> �Լ� -> �ݺ���

#include<stdio.h>

void Add_00();
int Add_01();
void Add_10();
int Add_11();


int main() {
	int input=0;

	while (input != -1) {
		printf("1.Add_00 2.Add_01 3.Add_10 4.Add_11 -1.end \n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			Add_00();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		default :
			break;
		}
	}


	getch();
	return 0;
}