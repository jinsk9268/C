/*
	함수에 배열을 전달하는 방법
	1. 배열이름(주소)을 전달하고
	2. 배열길이를 전달한다. (함수 내부에서는 길이 계산이 불가능하므로 미리 계산해서 전달해야 한다.)
*/

#include <stdio.h>

void doExam(int *ptr, int length) { // length도 잡아주기
	//배열의 주소(scores)를 저장한 포인터 변수(ptr)는 배열처럼 사용한다.
	//즉, ptr을 배열처럼 사용한다.
	int i;

	// 배열의 길이 공식 : 배열 크기 / 타입의 크기

	//int length =sizeof(list) / sizeof(int); // sizeof(ptr) 안됨 4바이트(또는 8) 나옴 여기서 쓰지말고 main에서 한다음에 받아쓰기

	for ( i = 0; i < length; i++) {
		printf("점수 입력 >> ");
		scanf_s("%d", &ptr[i]);
	}
	
}

double getAverage(int *ptr, int length) {
	int i;
	int total = 0;
	for ( i = 0; i < length; i++) {
		total += ptr[1];
	}
	return (double)total / length;
}

int main() {
	int scores[3]; // 국어, 영어, 수학 점수를 저장하는 변수

	// 배열의 길이 공식 : 배열 크기 / 타입의 크기

	int length =sizeof(scores) / sizeof(int); // sizeof(ptr) 안됨 4바이트(또는 8) 나옴

	double average;
	doExam(scores, length); // 국어, 영어, 수학 점수를 scores 변수에 저장한다.
	average = getAverage(scores, length); // scores 배열의 평균을 반환한다.
	printf("평균: %g\n", average);

	return 0;
}