/*
	������ ������ �Ҹ� ���� (scope ����)
				����				�Ҹ�				�޸� ����
	1. ��������	{				}				����
	2. ��������	���α׷� ����		���α׷� ����		������
	3. �����Ҵ�	malloc			free			��(heap)
*/

#include <stdio.h>
#include <stdlib.h> // malloc, free �Լ��� ����� ���ؼ� �ʿ�

void example1() {
	// C++�� ����
	// int * ptr = new int;
	// C�� ����
	// int * ptr = malloc(4); // �޸� ������ 4����Ʈ �Ҵ��� �޶�.
	// int * ptr = malloc(sizeof(int)); // �޸� ������ 4����Ʈ �Ҵ��� �޶�.
	int * ptr = (int *)malloc(sizeof(int)); // ������ ����� �޸� ������ 4����Ʈ �Ҵ��� �޶�. (int *) int������ ĳ����, ptr ��������
	*ptr = 1; //�Ҵ�� ������ ����(*ptr) 1�� �����ϴ�.
	printf("%d \n", *ptr); // �Ҵ�� ������ ���� ����ش޶�
	free(ptr); // �Ҵ�� ������ �ý��ۿ��� �ݳ��Ѵ�. (�޸� ���� ���� �ڵ�)
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