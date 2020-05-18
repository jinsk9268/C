/*
	중첩 for 문

	1. 일반적으로 2개 변수가 사용된다.
	2. 하나는 고정되어 있고, 하나는 계속해서 변한다.
	3. 고정된 값을 바깥쪽 for 문, 변하는 값을 안쪽 for 문으로 사용한다.

*/

#include <stdio.h>

void example1(){
	// 2x1=2
	// ...
	// 9x9=81
	int dan, n;

	for (dan = 2; dan < 10; dan++) {
		for ( n = 1; n < 10; n++){
			printf("%d x %d = %d\n", dan, n, dan * n);
		}
		printf("%d단이 종료되었습니다\n", dan);
	}
}

void example2() {
	// 2x1=2 3x1=3 4x1=4 .... 9x1=9
	// 2x2=4 3x2=6 4x2=8 .... 9x2=18
	// 이런식으로

	int dan, n;

	for ( n = 1 ; n < 10; n++) {
		for (dan = 2; dan < 10; dan++){
			printf("%d x %d = %d\t", dan, n, dan * n); // \t 간격이동
		}
		printf("\n"); // 줄바꿔주는 타이밍
	}

}

int main() {
	//example1();
	example2();
	return 0;
}
