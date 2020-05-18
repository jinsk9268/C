/*
	문제. scanf 함수를 이용하여 n에 임의의 정수를 입력 받아 출력하시오.
	단, scanf 함수에서 &를 사용하지 마시오.
*/
#include <stdio.h>

void quiz1() {
	int n;
	int *ptr = &n;
	printf("임의의 정수 n을 입력하세요 >> ");
	scanf("%d", ptr); // *붙이면 안됨, ptr에 n의 주소가 입력되어 있으니까
	printf("n=%d\n", n);
}

int main() {
	quiz1();
	return 0;
}