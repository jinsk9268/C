/*
	1~99���� ���� 3,6,9 ���Ӹ���� ¦
*/

#include <stdio.h>

int main() {

	int unitsDight, tensDight; // ���� �ڸ�, ���� �ڸ�
	int condition1, condition2; // ���� �ڸ��� 3�� ����ΰ�, ���� �ڸ��� 3�� ����ΰ�
	int n; // 1~99

	for (n = 1; n < 100; n++) {
		unitsDight = n % 10;
		tensDight = n / 10;
		condition1 = unitsDight % 3 == 0 && unitsDight != 0; // 1�� �ڸ� ������ 0�̴ϱ� 0�� �ƴϾ������ �־���ߵ�
		condition2 = tensDight % 3 == 0 && tensDight != 0; // 3,6,9�� ������ 1�� ���ϱ� ���̶�
		if ( condition1 == 1 && condition2 == 1 ) { // �Ѵٱ׷��� , ������� ���� 1 (true) // if (1) { �� // ���� �������൵ ��
			printf("¦¦\t");
		} else if ( condition1 == 1 || condition2 == 1 ) { // �ϳ����׷���
			printf("¦\t");
		} else {
			printf("%d\t", n);
		}
		if ( n % 10 == 0 ) { // if ( 0 ) { ���� // n % 10 -> 10�� ����� �����̴� //10���� ��� (10, 20, 30, ....����)
			// if ( !(n % 10) ) { // ! -> not ������ �ٲ��ִ� ���
			printf("\n");
		}
	}

	return 0;
}