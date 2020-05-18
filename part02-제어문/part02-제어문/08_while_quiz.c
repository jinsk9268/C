/*
	문제1. 1~100 까지 누적하다가 totol 이 3000보다 커지면 그만 누적하고 
			빠져나와서 total 을 확인하시오.

	문제2. 정수를 계속해서 입력 받아서 모두 누적하시오. 음수가 입력되면 그만하시오.
	문제3. while 무한루프로 구현
*/

#include <stdio.h>

void quiz1() {
	int total = 0;
	int n = 1;

	while (total <= 3000) { // total 이 3000까지는 괜찮다 3000이하는 더해라, 3000 넘어갈때 결과값이 나온다
		total += n;
		n++;
	}

	/*
	for ( n = 1, total <= 3000; n++ ){
		total += n;
	}
	*/
	printf("3000 보다 큰 누적은 %d가 처음입니다\n", total);
}

void quiz2(){
	int total = 0;
	int n;
	printf("입력 (음수이면 종료) >>");
	scanf_s("%d", &n);
	while (n >= 0) { // 0 이상은 내가 더해줘도 괜찮다
		total += n;
		printf("입력 (음수이면 종료) >>");
		scanf_s("%d", &n);
		
}
	printf("총 누적은 %d입니다.\n" , total);
}

void quiz3(){
	int total = 0;
	int n;
	while (1) {
		printf("입력 (음수이면 종료) >>");
		scanf_s("%d", &n);
		if ( n < 0) {
			break;
		}
		total += n;
	}
	printf("총 누적은 %d입니다.\n" , total);
}

int main(){
	//quiz1();
	//quiz2();
	quiz3();
	return 0;
}