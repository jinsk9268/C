/*

������ �ִ� �Լ�

	1. ���� ����� ��ȯ�ϴ� �Լ�
	2. �Լ� ���Ǹ� ���ϰ��� Ÿ������ �����Ѵ�. (int, double ��)
*/

#include <stdio.h>
#include <math.h> // ���а����Լ��� ����� �� �ִ�

double getArea(double r) { // ȣ���Ҷ� �����ϴ� ���� r�� ����
	return 3.14 * pow(r,2); // getArea�� �����ߴ� ���� �ش� // pow(r,2) : r�� 2����
}

int main() { // �����Լ��� �������� 0�̴�
	double radius;
	double area;
	printf("���� �������� �Է��ϼ��� >> ");
	scanf_s("%lf", &radius);
	// area = 3.14 * radius * radius;
	area = getArea(radius); // ���� ó���ϴ� �κ�
	printf("�������� %g�� ���� ũ��� %g�Դϴ�.\n", radius, area);

	return 0;
}
