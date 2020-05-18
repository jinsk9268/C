/*
	1~99까지 숫자 3,6,9 게임만들기 짝
*/

#include <stdio.h>

int main() {

	int unitsDight, tensDight; // 일의 자리, 십의 자리
	int condition1, condition2; // 일의 자리가 3의 배수인가, 십의 자리가 3의 배수인가
	int n; // 1~99

	for (n = 1; n < 100; n++) {
		unitsDight = n % 10;
		tensDight = n / 10;
		condition1 = unitsDight % 3 == 0 && unitsDight != 0; // 1의 자리 나머지 0이니까 0이 아니어야함을 넣어줘야됨
		condition2 = tensDight % 3 == 0 && tensDight != 0; // 3,6,9가 맞으면 1이 들어가니까 참이라서
		if ( condition1 == 1 && condition2 == 1 ) { // 둘다그러냐 , 컨디션의 값이 1 (true) // if (1) { 참 // 굳이 안적어줘도 됨
			printf("짝짝\t");
		} else if ( condition1 == 1 || condition2 == 1 ) { // 하나만그러냐
			printf("짝\t");
		} else {
			printf("%d\t", n);
		}
		if ( n % 10 == 0 ) { // if ( 0 ) { 거짓 // n % 10 -> 10의 배수는 거짓이다 //10개씩 출력 (10, 20, 30, ....이후)
			// if ( !(n % 10) ) { // ! -> not 참으로 바꿔주는 방법
			printf("\n");
		}
	}

	return 0;
}