/*
	continue : 반복문에서 continue 다음에 나타난 실행문들을 실행시키지 않는다.
*/

#include <stdio.h>

int main () {

	/*
		짝수 : 2로 나눈 나머지가 0이면 짝수
		홀수 : 2로 나눈 나머지가 1이면 홀수
	*/

	int dan, n;

	for ( n = 1; n < 10; n++ ) {
		if ( n % 2 == 0 ) { // n이 짝수이면
			continue; // 나의 아래 실행문은 실행하지 마라! (continue 아래부분은 생략 -> 제외한다)
		}
		for ( dan = 2; dan < 10 ; dan++ ) {
			printf("%d x %d = %d\t", dan, n, dan * n);
		}
		printf("\n");
	}

	return 0;
}