/*
	문제. 학생의 시험 성적을 입력받아서(국, 영, 수) 평균을 출력하시오.
	      시험성적은 int scores[3] 에 저장한다.
	문제. 학생의 시험 성적을 입력받아서(국 영 수 사 과) 
	      평균, 최고점수, 최저점수를 출력하시오.
		  시험성적은 int scores[6] 에 저장한다
		  scores[0] 은 사용하지 않는다.
*/

#include <stdio.h> 

void quiz1() {
	int scores[3];
	int i;
	int length;
	int total = 0;
	double average;

	length = sizeof(scores) / sizeof(int);

	for (i = 0; i < length; i++) {
		printf("%d번째 점수 입력하시오 >> ", i + 1);
	    scanf_s("%d", &scores[i]); // 변수 이름
		total += scores[i];
	}
	 average = (double)total / length;
	 printf("평균은 %.1f점 입니다.\n", average);
}

void quiz2() {
	int scores[6];
	int i;
	int length;
	int total; // 초기화 없음에 주의
	int max; // 최대
	int min; // 최소
	double average;

	length = sizeof(scores) / sizeof(int);

	for (i=1; i < length; i++) {
		printf("%d번째 점수를 입력 >>",i);
		scanf_s("%d", &scores[i]);
	}
	// 첫번째 점수로 초기화를 진행한다.
	total = scores[1];
	max = scores[1];
	min = scores[1];

	// 합계, 최대, 최소 구하기
	for ( i = 2; i < length; i++) {
		total += scores[i]; // 첫번째 점수 초기화를 통해서 전달했기때문에, 1로 하면 더했던 점수 또더하니까 2로 시작
		if ( max < scores[i] ) { 
			max = scores[i]; // 나보다 큰게 나오면 그거로 갈아타겠다
		} 
		if ( min > scores[i] ) {
			min = scores[i]; // 나보다 작은게 나오면 그거로 갈아타겠다
		}
	}

	average = (double)total / (length-1);
	printf("평균 %.1f점 , 최대 %d점, 최소 %d점.\n", average, max, min);

}

int main() {
	//quiz1();
	quiz2();
	return 0;
}