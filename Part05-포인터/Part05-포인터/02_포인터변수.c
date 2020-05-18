/*
	포인터변수

	1. 주소값을 저장하는 변수이다.
	2. 포인터변수 선언방법 // ptr : address , *ptr : value
		1) int* ptr = 주소; // 포인터변수의 이름 ptr -> 주소만 저장할 수 있음
		2) int *ptr = 주소;
		3) int * ptr = 주소;
		4) int *prt1, *ptr2; // 둘 이상의 포인터 변수 선언
		   ptr1 = 주소1;
		   ptr2 = 주소2;

*/
#include <stdio.h>

void example1() {
	int n1 = 100;
	int *ptr1 = &n1; // ptr1에는 &n1(n1의 주소)이 저장되어있다
	double n2 = 1.5;
	double *ptr2 = &n2; // ptr2에는 &n2(n2의 주소)이 저장되어있다
	printf("ptr1을 통한 n1의 값 : %d \n", *ptr1);
	printf("ptr2을 통한 n2의 값 : %g \n", *ptr2);
}

void example2() {
	int n = 100;
	int *ptr; // ptr은 포인터변수이므로 주소만 저장할 수 있다
	// ptr = 200; // 200은 주소가 아니므로 불가
	// *ptr = 200; // 현재 ptr은 저장된 주소가 없으므로 불가 (선언만 했기에), 주소를 저장하기 전까진 정상적인 사용 불가
	ptr = &n; // 가능 (n의 주소값을 저장했기 때문에)
	printf("ptr에 n의 주소가 저장되어 있으므로 *ptr==n이다 \n");
	printf("*ptr=%d, n=%d\n", *ptr, n);
}

void example3() {
	int n = 100;
	// int *ptr = 0; // 주소에서 0이란 어떤 주소도 지정하지 않았음을 의미함
	int *ptr = NULL; // NULL : 없는 주소 (초기화 용도로 사용)
	// int *ptr = 0x0000FFFF; // 직접 주소값을 사용하는 것은 불가!
	printf("NULL 포인터 상태에서 확인하는 *ptr : %d \n", *ptr); // 실행되는 결과 없음 주소가 없기때문에
}

int main() {
	example1();
	example2();
	example3();
	return 0;
}