/*
	문제. 배열에 저장된 모든 요소를 순서대로 출력하는 함수를 구현하시오.
*/
#include <stdio.h>

void quiz3(int list[], int length) { //배열의 주소를 저장할 때 사용하는 매개변수 선언방법
	int i;
	for (i = 0; i < length; i++) {
		printf("%d번째 요소 = %d\n", i+1, list[i]);
	}
}

int main() {
	int list[] = {10, 20, 30, 40, 50};
	quiz3(list, sizeof(list) / sizeof(int));
	return 0;
}