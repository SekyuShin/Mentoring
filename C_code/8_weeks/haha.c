//#include<stdio.h>
//
//// 함수의 종류
//
//void flash();
//void show(int);
//int inputAdd();
//int square(int);
//
//
//int main() {
//	int a = 10;
//	int command=0;
//
//	show(a);
//	flash();
//
//	while (command != -1) {
//		printf("-1.quit  1.inputAdd  2.square  3.show\n");
//		scanf("%d", &command);
//		switch (command) {
//		case 1:
//			a += inputAdd();
//			break;
//		case 2:
//			a = square(a);
//			break;
//		case 3:
//			show(a);
//			break;
//		case -1:
//			printf("quit\n");
//			break;
//		default :
//			printf("wrong command\n");
//			break;
//		}
//		flash();
//	}
//
//
//
//	getch();
//	return 0;
//}
//
//void flash() {
//	printf("==================================\n");
//}
//void show(int a) {
//	printf("a = %d\n", a);
//}
//int inputAdd() {
//	int var;
//	printf("input num : ");
//	scanf("%d", &var);
//	return var;
//}
//int square(int a) {
//	return a * a;
//}