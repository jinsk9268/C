/*
	정적변수

	1. 특정 지역에서만 사용할 수 있다. (지역변수)
	2. 나머지 특징은 전역변수의 특징을 가진다. (전역변수)
		- 변수 값의 유지를 위해서 전역변수로 관리하지만 
		  특정 지역에서만 사용하기 때문에 정적변수라는 개념이 도입되었다

	스코프
*/
#include <stdio.h>

// int total; // 2.1 소멸되지 않는 전역변수 total을 사용


void piggyBank(int money) {
	// int total = 0; // 1.1 지역변수로 선언되면

	// 정적변수를 선언하려면 static을 접두어로 사용한다.
	static int total; // piggyBank 호출이 끝나도 값을 유지하고, piggyBank에서만 사용할 수 있다. 피기에서만 사용할 수 있는 권한을 부여받아서

	total += money;
	printf("현재 모인돈 : %d원\n", total);
} // 1.2 호출이 끝나면 사라진다. 

int main() {
	piggyBank(10000);
	piggyBank(10000);
	piggyBank(10000);
	piggyBank(10000);
	return 0;
} // 2.2 전역변수 total은 전 지역에서 사용되는가? NO