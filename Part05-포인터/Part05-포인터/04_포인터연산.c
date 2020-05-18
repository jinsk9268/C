/*
	포인터 연산 (주소값 연산)
	1. + : 다음 주소
	2. - : 이전 주소
*/
#include <stdio.h>

int main() {
	int *ptr1 = NULL; // 주소값으로 0 (없는 주소)
	double *ptr2 = NULL;
	ptr1++;
	ptr2++;
	printf("ptr1=%p(%d)\n", ptr1, ptr1);
	printf("ptr2=%p(%d)\n", ptr2, ptr2);
	return 0;
}