/*
	����. n�� ���� �Է� �޴� quiz2 �Լ��� �����Ͻÿ�.
*/
#include <stdio.h>

void quiz2(int *ptr) {
	printf("���� n�� �Է��Ͻÿ� >> ");
	scanf_s("%d",ptr);
}

int main() {
	int n;
	quiz2(&n);
	printf("n=%d\n", n);
	return 0;
}