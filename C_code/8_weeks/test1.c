//�Լ�, �ݺ���, ���ǹ�
// ���� -> ����, ������, updown���� 
// 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main() {
	srand(time(NULL));
	int random = rand()%100;
	int input;
	//int min=1,max=100;
	printf("%d\n",random);

	while (1) {
		scanf("%d", &input);
		if (input == random) {
			printf(" bingo \n");
			break;
		}
		else {
			if (input > random) {
				printf("down\n");
			}
			else if(random > input){
				printf("up\n");
			}
		}
	}


	getch();
	return 0;
}
