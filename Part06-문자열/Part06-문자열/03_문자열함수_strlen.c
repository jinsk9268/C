#include <stdio.h>
#include <string.h> // 문자열 함수를 처리하기 위해서 추가

int main() {
	char word[10] = "hello";

	printf("배열의 크기 : %d \n", sizeof(word));
	printf("문자열의 길이 : %d \n", strlen(word)); // NULL은 포함X, 실제문자열의 길이만 계산(널문자는 제외)

	return 0;
}