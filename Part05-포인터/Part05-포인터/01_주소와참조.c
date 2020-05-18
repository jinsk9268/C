/*
	1. 주소연산자 : &변수명 (주소 알아내는거)
	2. 메모리참조연산자 : *주소값 (주소에 뭐가 저장되어있는지 궁금해요)
*/

#include <stdio.h>

void example1() {
	int n1 = 100;
	double n2 = 1.5;
	printf("n1의 주소 = %p(%d)\n", &n1, &n1); // 16진수(10진수)
	printf("n2의 주소 = %p(%d)\n", &n2, &n2);
}

void example2() {
	int n1 = 100;
	double n2 = 1.5;
	printf("&n1 주소를 참조하면 : %d \n", *(&n1));
	printf("&n2 주소를 참조하면 : %g \n", *(&n2)); // 참조 해당 주소에 저장된 값을 확인하라

}
int main() {
	example1();
	example2();
	return 0;
}