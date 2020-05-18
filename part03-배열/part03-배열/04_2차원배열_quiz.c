/*
	문제. 3층짜리 아파트가 있다 1호, 2호 라인으로 구성되어있다
		각 층 / 각 호 마다 몇 명이 살고 있느지 입력 받은 뒤
		전체 인원수를 출력하시오
	문제. 구구단 전체(2~9)의 결과만 배열에 저장하시오.
			저장된 결과를 보기좋게 출력하시오.
*/

#include <stdio.h>

void quiz1() {
	int apt[3][2];
	int i, j;
	int total = 0;

	for ( i = 0; i < 3; i++) {
		printf("%d층 입니다.\n", i +1); // 층구분 해줄라고
		for ( j = 0; j < 2; j++) {
			//printf ("%d층 %d호에 사는 사람의 수 >> ", i+1, j+1);
			printf("%5d호에 몇 명이 삽니까? >>", j+1);
			scanf_s("%d", &apt[i][j]);
			total += apt[i][j]; // 아파트에 사는 인원수 i층 j호
		}
		printf("\n");
	}
	
	printf("총 인원은 %d명 입니다\n", total);
}

void quiz2() {
	int gugudan[8][9];
	int i, j;
	//결과 저장
	for ( i = 0; i < 8; i++) {
		for ( j = 0; j < 9; j++) {
			gugudan[i][j] = (i + 2) * (j + 1);
		}
	}
	//출력
	for ( i = 0; i < 8; i++) {
		printf("%d단 입니다.\n", i + 2);
		for ( j = 0; j < 9; j++ ) {
			printf("%3dX%d=%d\n", i + 2, j + 1, gugudan[i][j]);
		}
		printf("\n");
	}		
}

int main() {
	//quiz1();
	quiz2();
	return 0;
}