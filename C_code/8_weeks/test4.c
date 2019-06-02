//함수의 형태에 대한 비교 조건문과 반복문 사용해서
// 뭐가 좋을까나

//조건 -> 함수 -> 반복문

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