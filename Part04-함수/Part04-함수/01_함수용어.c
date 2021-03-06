/*
	1. 함수
		1) 코드를 분할한 단위
		2) 특정 목적에 맞는 역할을 부여
	2. 함수용어
		1) 함수명
		2) 함수에게 전달하는 값 : 인수, argument, parameter(파라미터)
		3) 함수에게서 받아오는 값 : 반환, return(리턴)
	3. 함수 예
		1) 함수명 : 믹서기		자판기
		2) 파라미터 : 사과		돈
		3) 리턴값 : 사과주스		커피
		
*/
#include <stdio.h> // 기본입출력함수의 정의가 되어 있다.

//1. 함수명 : main
//2. 파라미터(전달하는거) : 없음(void 또는 비워놓기)
//3. 리턴값(결과값) : 0 (타입은 int)(되돌려주는 값은 정수값)
//뒤로입력 앞으로 출력

int main(void) {

	int a;

	// 1. 함수명 : printf
	// 2. 파라미터 : "Hello"
	// 3. 리턴값 : a에 저장 (출력에 성공한 글자 수) -> Hello5

	a = printf("Hello");

	printf("%d\n", a);

	return -1; // 시스템에게 -1을 리턴해주면 시스템은 main 함수가 비정상종료 된 것으로 처리한다.

	printf("안녕하세요!\n");

	return 0; // 시스템에게 0을 리턴해주면 시스템은 main 함수가 정상종료 된 것으로 처리한다.
}