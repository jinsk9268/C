/*
	함수의 선언

	1. 함수 정의보다 함수 호출이 먼저 발생하는 경우에 필요하다.
	2. 선언 방법
		1) char getGrade(double ave);
		2) char getGrade(double aaaaa); // 동일하든 다르든 상관없다
		3) char getGrade(douvble);
	3. 선언 위치
		프로그램 코드의 상단에 위치한다.
*/

#include <stdio.h>

// 함수들의 선언 위치
char getGrade(double ave);
double getAverage(int k, int e, int m);

// 함수 선언들이 모여서 => 헤더 파일이 된다.

int main() {
	int kor, eng, mat;
	double average;
	printf("국, 영, 수 순으로 입력 >> ");
	scanf_s("%d%d%d", &kor, &eng, &mat);
	average = getAverage(kor, eng, mat); // getAverage 함수 호출, 호출이 정의보다 위에있어서 문제 c언어 에서는
	printf("학점은 %c학점입니다.\n", getGrade(average)); // getGrade 함수 호출

	return 0;
}

// getGrade 함수 정의
char getGrade(double ave) {
	if (ave >= 90) {
		return 'A';
	} else if (ave >= 80) {
		return 'B';
	} else if (ave >= 70) {
		return 'C';
	} else if (ave >= 60) {
		return 'D';
	} else {
		return 'F';
	}
}

// getAverage 함수 정의
double getAverage(int k, int e, int m) {
	return (k + e + m) / 3.0;
}