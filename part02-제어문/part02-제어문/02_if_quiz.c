/*
   문제. 국어, 영어, 수학 점수를 입력 받아서 평균과 학점을 출력하시오
         학점은 평균 90 이상이면 'A' , 80 이상이면 'B', 70 이상이면 'C', 60 이상이면 'D', 나머지면 'F'
*/

#include <stdio.h>

void main() {
	int kor, eng, mat;
	double average;
	char grade;

	printf("국어 점수는? >>"); scanf_s("%d", &kor);
	printf("영어 점수는? >>"); scanf_s("%d", &eng);
	printf("수학 점수는? >>"); scanf_s("%d", &mat);

	average = ((double)kor + eng + mat) / 3;

	if ( average <=100 && average >= 90) 
		grade = 'A'; // 실행문 하나일 경우 { 생략가능
	else if (average >= 80)
		grade = 'B';
	else if (average >= 70)
		grade = 'C';
	else if (average >= 60)
		grade = 'D';
	else 
		grade = 'F';

	printf("국어 : %d점, 영어 : %d점, 수학 : %d점\n", kor, eng, mat);
	printf("평균 : %.1f점, 학점 : %c점", average, grade);
}