/*
   문제. 권한이 1~3 으로 있다.
         권한이 1이면 "읽기"
		 권한이 2이면 "읽기" , "실행"
		 권한이 3이면 "읽기" , "실행" , "수정"
		 이외에는 "권한 없음"
		 
   문제. 국어, 영어, 수학 점수를 입력 받아서 평균과 학점을 출력하시오
         switch로 구현 : 학점은 평균 90 이상이면 'A' , 80 이상이면 'B', 70 이상이면 'C', 60 이상이면 'D', 나머지면 'F'
*/

#include <stdio.h>

// quiz1 함수의 "정의" : 함수를 만든다
void quiz1() {
	int n;

	printf ("권한을 입력 (1~3) >> ");
	scanf_s ("%d", &n);

	switch (n) {
	case 3: printf("수정, ");
	case 2: printf("실행, ");
	case 1: printf("읽기\n");
		break;
	default: printf("권한 없음\n");
	}
}

void quiz2() {
	int kor, eng, mat;
	double average;
	char grade;

	printf("국어 점수는? >>"); scanf_s("%d", &kor);
	printf("영어 점수는? >>"); scanf_s("%d", &eng);
	printf("수학 점수는? >>"); scanf_s("%d", &mat);

	average = (kor + eng + mat) / 3.0;

	switch ( (int)average / 10 ) {
	case 10:
	case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
    case 6: grade = 'D'; break;
	default: grade = 'F';
	}
	printf("평균: %.1f, 학점: %c학점\n", average, grade);
}

int main() {
	// quiz1(); //quiz1 함수를 "호출" : 함수를 실행한다.
	quiz2();

	return 0;
}