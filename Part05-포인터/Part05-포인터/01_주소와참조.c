/*
	1. �ּҿ����� : &������ (�ּ� �˾Ƴ��°�)
	2. �޸����������� : *�ּҰ� (�ּҿ� ���� ����Ǿ��ִ��� �ñ��ؿ�)
*/

#include <stdio.h>

void example1() {
	int n1 = 100;
	double n2 = 1.5;
	printf("n1�� �ּ� = %p(%d)\n", &n1, &n1); // 16����(10����)
	printf("n2�� �ּ� = %p(%d)\n", &n2, &n2);
}

void example2() {
	int n1 = 100;
	double n2 = 1.5;
	printf("&n1 �ּҸ� �����ϸ� : %d \n", *(&n1));
	printf("&n2 �ּҸ� �����ϸ� : %g \n", *(&n2)); // ���� �ش� �ּҿ� ����� ���� Ȯ���϶�

}
int main() {
	example1();
	example2();
	return 0;
}