/*
	continue : �ݺ������� continue ������ ��Ÿ�� ���๮���� �����Ű�� �ʴ´�.
*/

#include <stdio.h>

int main () {

	/*
		¦�� : 2�� ���� �������� 0�̸� ¦��
		Ȧ�� : 2�� ���� �������� 1�̸� Ȧ��
	*/

	int dan, n;

	for ( n = 1; n < 10; n++ ) {
		if ( n % 2 == 0 ) { // n�� ¦���̸�
			continue; // ���� �Ʒ� ���๮�� �������� ����! (continue �Ʒ��κ��� ���� -> �����Ѵ�)
		}
		for ( dan = 2; dan < 10 ; dan++ ) {
			printf("%d x %d = %d\t", dan, n, dan * n);
		}
		printf("\n");
	}

	return 0;
}