/*
	��ø for ��

	1. �Ϲ������� 2�� ������ ���ȴ�.
	2. �ϳ��� �����Ǿ� �ְ�, �ϳ��� ����ؼ� ���Ѵ�.
	3. ������ ���� �ٱ��� for ��, ���ϴ� ���� ���� for ������ ����Ѵ�.

*/

#include <stdio.h>

void example1(){
	// 2x1=2
	// ...
	// 9x9=81
	int dan, n;

	for (dan = 2; dan < 10; dan++) {
		for ( n = 1; n < 10; n++){
			printf("%d x %d = %d\n", dan, n, dan * n);
		}
		printf("%d���� ����Ǿ����ϴ�\n", dan);
	}
}

void example2() {
	// 2x1=2 3x1=3 4x1=4 .... 9x1=9
	// 2x2=4 3x2=6 4x2=8 .... 9x2=18
	// �̷�������

	int dan, n;

	for ( n = 1 ; n < 10; n++) {
		for (dan = 2; dan < 10; dan++){
			printf("%d x %d = %d\t", dan, n, dan * n); // \t �����̵�
		}
		printf("\n"); // �ٹٲ��ִ� Ÿ�̹�
	}

}

int main() {
	//example1();
	example2();
	return 0;
}
