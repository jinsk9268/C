/*
	문제. 함수를 호출할때마다 몇 번째 호출인지를 출력하는 함수를 구현하시오.
*/

#include <stdio.h>

void manual() {
	static int count; // 최초 0으로 사용되고 그 이후로는 기존의 값을 유지 (=0 써도 처음만 유지)
	count++;
	printf("%d번째 메뉴얼입니다.\n", count);
}

int main() {
	manual(); // 1번째 메뉴얼입니다.
	manual(); // 2번째 메뉴얼입니다.
	manual(); // 3번째 메뉴얼입니다.
	manual(); // 4번째 메뉴얼입니다.
	manual(); // 5번째 메뉴얼입니다.
	return 0;
}