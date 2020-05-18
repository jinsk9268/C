/*
	문자열 처리

	1. char  타입의 배열을 이용한다
	2. 문자열은 큰 따옴표로 묶어서 처리한다 ("hi" , "h")
	3. 문자열의 구성
		실제 문자열 + 널문자
	4. 널문자
		1) '\0' (아스키코드의 첫번째 문자 0)
		2) 문자열의 종료를 의미하는 특수문자로 눈에 보이지는 않는다.
	5. scanf 사용 시 주의사항
		1) 공백 문자는 입력이 불가능하다 (해결 방법 없음)
		2) scanf_s  함수도 사용이 불가능하다.


*/

#include <stdio.h>

void example1() {
	char str[3] = "hi"; // str[0]: 'h', str[1]: 'i', str[2]: '\0'
	printf("문자열 : %s \n", str);
	str[1] = '\0'; // 문자열의 중간에 강제로 널문자가 삽입
	printf("문자열 : %s \n", str);
}

void example2() {
	char str[10]; // 최대 9자까지 입력이 가능
	printf("문자열 입력 >> ");
	scanf("%s", str); // 문자열의 scanf_s는 동작하지 않음, str은 배열이름이므로 &가 없어도 주소를 의미한다, space 문자 사용x
	printf("입력된 문자열 : %s\n", str);

}

int main() {
	example1();
	example2();
	return 0;
}