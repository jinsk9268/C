#include <stdio.h>
#include <string.h>

int main() {
	
	// concatenate : 연결한다

	char word1[10] = "happy";
	char word2[10] = "birthday";

	char result[20]; // word1 + word2 결과를 저장할 배열

	strcpy(result, word1); // 우선 첫 단어를 result 에 복사해 놓는다.
	strcat(result, " "); // 공백 넣고 싶으면
	strcat (result, word2); // result 에 저장된 문자열 뒤에 word2의 문자열을 연결한다.

	printf("연결된 문자열: %s \n", result);

	return 0;
}