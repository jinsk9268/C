#include <stdio.h>

void plusOne(int *ptr) {
	(*ptr)++; // *ptr -> ++ (현재 데이터 증가)
	//*ptr++; // ptr++ -> * (다음 주소의 값) -> 안됨!!!!
}

int main() {
	int n = 100;
	printf("증가 전 : %d\n", n);
	plusOne(&n); // 주소값에 의한 함수 호출을 call by reterence라고 한다
	printf("증가 후 : %d\n", n);
	return 0;
}