/*
	�Լ��� ����

	1. �Լ� ���Ǻ��� �Լ� ȣ���� ���� �߻��ϴ� ��쿡 �ʿ��ϴ�.
	2. ���� ���
		1) char getGrade(double ave);
		2) char getGrade(double aaaaa); // �����ϵ� �ٸ��� �������
		3) char getGrade(douvble);
	3. ���� ��ġ
		���α׷� �ڵ��� ��ܿ� ��ġ�Ѵ�.
*/

#include <stdio.h>

// �Լ����� ���� ��ġ
char getGrade(double ave);
double getAverage(int k, int e, int m);

// �Լ� ������� �𿩼� => ��� ������ �ȴ�.

int main() {
	int kor, eng, mat;
	double average;
	printf("��, ��, �� ������ �Է� >> ");
	scanf_s("%d%d%d", &kor, &eng, &mat);
	average = getAverage(kor, eng, mat); // getAverage �Լ� ȣ��, ȣ���� ���Ǻ��� �����־ ���� c��� ������
	printf("������ %c�����Դϴ�.\n", getGrade(average)); // getGrade �Լ� ȣ��

	return 0;
}

// getGrade �Լ� ����
char getGrade(double ave) {
	if (ave >= 90) {
		return 'A';
	} else if (ave >= 80) {
		return 'B';
	} else if (ave >= 70) {
		return 'C';
	} else if (ave >= 60) {
		return 'D';
	} else {
		return 'F';
	}
}

// getAverage �Լ� ����
double getAverage(int k, int e, int m) {
	return (k + e + m) / 3.0;
}