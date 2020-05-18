#include <stdio.h>

void example1() {
	// list 배열의 주소
    // 1. list (이믈 자체가 주소)
	// 2. &list[0] (첫 번째 요소의 주소)
	int list[3] = {100, 200, 300};
	int i; // 인데스 (0~2)
	
	printf("list[0]의 주소 : %p(%d) \n", list + 0, list + 0);
	printf("list[1]의 주소 : %p(%d) \n", list + 1, list + 1);
	printf("list[2]의 주소 : %p(%d) \n", list + 2, list + 2);

}

void example2() {
	int list[3] = {100, 200, 300};
	int i; // 인데스 (0~2)
	
	printf("list[0]의 값 : %d, %d \n", *(list + 0), list[0]);
	printf("list[1]의 값 : %d, %d \n", *(list + 1), list[1]);
	printf("list[2]의 값 : %d, %d \n", *(list + 2), list[2]);
}

void example3() {
	int list[3] = {100, 200, 300};
	int *ptr = list; // 배열의 이름은 자체가 주소값이다.
	printf("list[0]의 값 : %d, %d \n", list[0], ptr[0]); // 배열의 주소를 저장한 포인터 변수는 배열처럼 사용한다.
	printf("list[1]의 값 : %d, %d \n", list[1], ptr[1]);
	printf("list[2]의 값 : %d, %d \n", list[2], ptr[2]);
}

int main() {
	example1();
	example2();
	example3();
	return 0;
}