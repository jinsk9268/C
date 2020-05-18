#include <stdio.h>
#include <string.h>

int main() {
	char word[10] = "hello";
	char copy[10]; // word 배열에 저정된 문자열을 복사할 배열

	//중요 (배열의 이름은 배열의 주소이기 때문에 아래 문장은 주소를 변환하려는 시도이다)
	//copy = word; // 불가한 작업

	strcpy(copy, word); // copy <- word 방향으로 복사가 진행된다. strcpy_s

	//참고
	strcpy_s(copy, sizeof(copy), word);

	printf("복사된 문자열: %s \n", copy);

	return 0;
}