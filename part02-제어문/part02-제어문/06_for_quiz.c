/*
   문제. 입력 받은 정수에 해당하는 구구단을 출력하시오.
   문제. 1 ~ 100 사이 모든 정수를 누적하여 출력하시오.
   문제. 5개 제품의 가격을 입력받아서 총 구매액을 출력하시오.
*/

#include <stdio.h>

void quiz1() {
	int dan, n;
	printf("몇단을 출력할까요? >>");
	scanf_s("%d", &dan);

	for ( n = 1 ; n <10 ; n++) {
		printf ("%d * %d = %d \n", dan, n, dan*n);
	}
}

void quiz2() {
	int total = 0; //누적
	int n; // 1~100까지 증가할 변수
	// total += 1
	// total += 2
	// ...
	// total += 100
	// total += n

	for (n=1 ; n < 101 ; n++) {
		total += n;
	}

	printf("합은 %d 입니다.\n", total);
}

void quiz3() {
	int total = 0; // total 의 초기화는 0
	int price;
	int n; // 5번 반복시키는 변수

	for (n=0 ; n<5 ; n++) {
	printf ("%d번째 제품 가격 입력 >> ", n + 1); // 회수 잡을때 스타트 0에서 부터 시작
	scanf_s ("%d", &price);
	total += price;
	}

	printf ("상품의 총 가격은 %d입니다\n" , total);
}


int main() {
	//quiz1();
	//quiz2(); // 함수의 호출 (호출한 함수를 실행한다)
	quiz3();
	return 0;
}