#include <stdio.h>

void example1() {
	char word[10]; // 최대 9자(영문 기준), 초과되면 오류뜸
	printf("문자열 입력 >> ");
	gets(word);
	printf("입력된 문자열 : %s\n", word);
}

void example2() {
	char word[10];
	printf("문자열 입력 >> ");
	fgets(word, sizeof(word), stdin); // 넘어가면 잘라낸다
	// 1. word : 문자열이 입력될 배열
	// 2. sizeof(word) : 값으로 10, 입력 가능한 최대 문자수
	// 3. stdin (standard input strim) : 표준 입력 스트림 (키보드를 통한 입력 통로)
	printf("입력된 문자열 : %s\n", word);
}

void example3() {
	char word[10] = "hello";
	puts(word); // 출력하고 자동 줄바꿈
	printf("end of example3\n");
}

void example4() {
	char word[10] = "hello";
	fputs(word, stdout); // 그대로 출력
	//stdout (standard out put strim) : 표준 출력스트림(모니터를 통한 출력 통로)
	printf("end of example4\n");
}

int main() {
	example1();
	example2();
	example3();
	example4();
	return 0;
}