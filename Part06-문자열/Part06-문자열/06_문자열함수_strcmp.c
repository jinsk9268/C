#include <stdio.h>
#include <string.h>

int main() {

	// compare : 비교하다

	char word1[10] = "hello";
	char word2[10] = "hello";

	//같다 연산자 : ==
	// word1과 word2는 배열의 주소이기 때문에 두 배열의 주소가 같은지 묻는 것이다. 
	if (word1 == word2) {
		puts("같은 문자열이다");
	} else {
		puts("다른 문자열이다");
	}

	// 두 문자열의 비교 결과는 두 문자열의 차이로 구한다.
	// 1. 앞의 문자열이 크면 : 1
	// 2. 뒤의 문자열이 크면 : -1
	// 3. 두 문자열이 같으면 : 0 (false 를 의미)

	printf("비교 결과 : %d \n", strcmp(word1, word2));

	if ( !strcmp(word1, word2) ) { // 같으면 거짓이니 else로 넘어감, 앞에 !붙여서 처리
		puts("같은 문자열이다");
	} else {
		puts("다른 문자열이다");
	} 

	  return 0;
}