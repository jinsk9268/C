/*
	�Լ��� �迭�� �����ϴ� ���
	1. �迭�̸�(�ּ�)�� �����ϰ�
	2. �迭���̸� �����Ѵ�. (�Լ� ���ο����� ���� ����� �Ұ����ϹǷ� �̸� ����ؼ� �����ؾ� �Ѵ�.)
*/

#include <stdio.h>

void doExam(int *ptr, int length) { // length�� ����ֱ�
	//�迭�� �ּ�(scores)�� ������ ������ ����(ptr)�� �迭ó�� ����Ѵ�.
	//��, ptr�� �迭ó�� ����Ѵ�.
	int i;

	// �迭�� ���� ���� : �迭 ũ�� / Ÿ���� ũ��

	//int length =sizeof(list) / sizeof(int); // sizeof(ptr) �ȵ� 4����Ʈ(�Ǵ� 8) ���� ���⼭ �������� main���� �Ѵ����� �޾ƾ���

	for ( i = 0; i < length; i++) {
		printf("���� �Է� >> ");
		scanf_s("%d", &ptr[i]);
	}
	
}

double getAverage(int *ptr, int length) {
	int i;
	int total = 0;
	for ( i = 0; i < length; i++) {
		total += ptr[1];
	}
	return (double)total / length;
}

int main() {
	int scores[3]; // ����, ����, ���� ������ �����ϴ� ����

	// �迭�� ���� ���� : �迭 ũ�� / Ÿ���� ũ��

	int length =sizeof(scores) / sizeof(int); // sizeof(ptr) �ȵ� 4����Ʈ(�Ǵ� 8) ����

	double average;
	doExam(scores, length); // ����, ����, ���� ������ scores ������ �����Ѵ�.
	average = getAverage(scores, length); // scores �迭�� ����� ��ȯ�Ѵ�.
	printf("���: %g\n", average);

	return 0;
}