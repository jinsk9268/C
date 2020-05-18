/*
	�����ͺ���

	1. �ּҰ��� �����ϴ� �����̴�.
	2. �����ͺ��� ������ // ptr : address , *ptr : value
		1) int* ptr = �ּ�; // �����ͺ����� �̸� ptr -> �ּҸ� ������ �� ����
		2) int *ptr = �ּ�;
		3) int * ptr = �ּ�;
		4) int *prt1, *ptr2; // �� �̻��� ������ ���� ����
		   ptr1 = �ּ�1;
		   ptr2 = �ּ�2;

*/
#include <stdio.h>

void example1() {
	int n1 = 100;
	int *ptr1 = &n1; // ptr1���� &n1(n1�� �ּ�)�� ����Ǿ��ִ�
	double n2 = 1.5;
	double *ptr2 = &n2; // ptr2���� &n2(n2�� �ּ�)�� ����Ǿ��ִ�
	printf("ptr1�� ���� n1�� �� : %d \n", *ptr1);
	printf("ptr2�� ���� n2�� �� : %g \n", *ptr2);
}

void example2() {
	int n = 100;
	int *ptr; // ptr�� �����ͺ����̹Ƿ� �ּҸ� ������ �� �ִ�
	// ptr = 200; // 200�� �ּҰ� �ƴϹǷ� �Ұ�
	// *ptr = 200; // ���� ptr�� ����� �ּҰ� �����Ƿ� �Ұ� (���� �߱⿡), �ּҸ� �����ϱ� ������ �������� ��� �Ұ�
	ptr = &n; // ���� (n�� �ּҰ��� �����߱� ������)
	printf("ptr�� n�� �ּҰ� ����Ǿ� �����Ƿ� *ptr==n�̴� \n");
	printf("*ptr=%d, n=%d\n", *ptr, n);
}

void example3() {
	int n = 100;
	// int *ptr = 0; // �ּҿ��� 0�̶� � �ּҵ� �������� �ʾ����� �ǹ���
	int *ptr = NULL; // NULL : ���� �ּ� (�ʱ�ȭ �뵵�� ���)
	// int *ptr = 0x0000FFFF; // ���� �ּҰ��� ����ϴ� ���� �Ұ�!
	printf("NULL ������ ���¿��� Ȯ���ϴ� *ptr : %d \n", *ptr); // ����Ǵ� ��� ���� �ּҰ� ���⶧����
}

int main() {
	example1();
	example2();
	example3();
	return 0;
}