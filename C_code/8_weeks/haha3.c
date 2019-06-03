#include<stdio.h>
 //원하는 구구단들 출력

void KuKuDan(int var) {
	int i;
	for (i = 0; i < 9; i++) {
		printf("%d * %d = %d \t",var,i+1,var*(i+1));
	}printf("\n");
}

void Range(int valStart, int valEnd) {
	int i;
	for (i = valStart; i < valEnd + 1; i++) {
		KuKuDan(i);
	}
}

int Prove(int var) {
	if (var > 1 && var < 10) {
		return 0;
	}
	else {
		return 1;
	}
}

int main() {
	int start, end;

	printf("구구단을 외자\n");
	printf("시작 : ");
	scanf("%d", &start);
	
	if (Prove(start)) {
		printf("시작값 오류\n");
		getch();
		return 0;
	}

	printf("끝 : ");
	scanf("%d", &end);
	if (Prove(end)) {
		printf("끝값 오류\n");
		getch();
		return 0;
	}
	if (start <= end) {
		Range(start, end);
	}
	else {
		printf("시작값이 끝값보다 큽니다.\n");
	}
	

	getch();

	return 0;
}