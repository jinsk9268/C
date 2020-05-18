/*
	문제. n에 값을 입력 받는 quiz2 함수를 구현하시오.
*/
#include <stdio.h>

void quiz2(int *ptr) {
	printf("정수 n을 입력하시오 >> ");
	scanf_s("%d",ptr);
}

int main() {
	int n;
	quiz2(&n);
	printf("n=%d\n", n);
	return 0;
}