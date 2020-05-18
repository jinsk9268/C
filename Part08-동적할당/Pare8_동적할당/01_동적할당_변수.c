/*
	변수의 생성과 소멸 시점 (scope 관련)
				생성				소멸				메모리 영역
	1. 지역변수	{				}				스택
	2. 전역변수	프로그램 시작		프로그램 종료		데이터
	3. 동적할당	malloc			free			힙(heap)
*/

#include <stdio.h>
#include <stdlib.h> // malloc, free 함수의 사용을 위해서 필요

void example1() {
	// C++의 문법
	// int * ptr = new int;
	// C의 문법
	// int * ptr = malloc(4); // 메모리 공간을 4바이트 할당해 달라.
	// int * ptr = malloc(sizeof(int)); // 메모리 공간을 4바이트 할당해 달라.
	int * ptr = (int *)malloc(sizeof(int)); // 정수가 저장될 메모리 공간을 4바이트 할당해 달라. (int *) int형으로 캐스팅, ptr 지역변수
	*ptr = 1; //할당된 공간에 가서(*ptr) 1을 저장하다.
	printf("%d \n", *ptr); // 할당된 공간의 값을 출력해달라
	free(ptr); // 할당된 공간을 시스템에게 반납한다. (메모리 누수 방지 코드)
}

void example2() {
	double * ptr = (double*)malloc(sizeof(double));
	*ptr = 1.5;
	printf("%g \n", *ptr);
	free(ptr);
}

int main() {
	example1();
	example2();
	return 0;
}