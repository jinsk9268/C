/*
	������ ���� (�ּҰ� ����)
	1. + : ���� �ּ�
	2. - : ���� �ּ�
*/
#include <stdio.h>

int main() {
	int *ptr1 = NULL; // �ּҰ����� 0 (���� �ּ�)
	double *ptr2 = NULL;
	ptr1++;
	ptr2++;
	printf("ptr1=%p(%d)\n", ptr1, ptr1);
	printf("ptr2=%p(%d)\n", ptr2, ptr2);
	return 0;
}