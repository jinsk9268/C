/*
	문제. 대문자를 전달하면 소문자로 변환해서 출력하는 toLower 함수와
		  소문자를 전달하면 대문자로 변환해서 출력하는 toUpper 함수를 구현하시오.
*/

#include <stdio.h>

void toLower(char ch) {

	if ( ch < 'A' || ch > 'Z') {
		printf("대문자가 아니기 때문에 변환할 수 없습니다.\n");
		return;
	} 
	printf("대문자 %c는 소문자로 %c입니다.\n", ch, ch+32);
}

void toUpper(char ch) {
	if (ch < 'a' || ch > 'z') {
		printf("소문자가 아니기 때문에 변환할 수 없습니다.\n");
		return;
	}
	printf("소문자 %c는 대문자로 %c입니다.\n", ch, ch-32);
}

int main() {
	int choice;
	char alphabet;
	printf ("메뉴선택 (1. 대 -> 소, 2. 소-> 대)하세요.\n");
	printf ("선택 >> ");
	scanf_s("%d", &choice); // 1 누르고 엔터 누르면 알파벳으로감 엔터 문자이기때문
	printf("변환할 알파벳 입력 >> ");
	scanf_s(" %c", &alphabet); // %c앞에 스페이스 누르기 불필요한 공백문자 처리

	switch ( choice ) {
	case 1: toLower(alphabet);
		break;
	case 2: toUpper(alphabet);
		break;
	default : printf("없는 메뉴\n");
	}

	return 0;
}