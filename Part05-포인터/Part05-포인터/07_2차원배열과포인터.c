/*
	1. 2�����迭�� ��������

	int list[3][2];
	int (*ptr)[2]; // 2��¥�� 2���� �迭�� ������ �� �ִ� �����ͺ���
	ptr = list; // �迭�� �̸��� �迭�� �ּ��̴�. (list == &list[0][0]
	list[i][j] == ptr[i][j]

	2. 2�����迭�� �Ķ����(����) ó��
		1) �迭�̸�(�ּ�)�� �����ϰ�,
		2) �迭�� �� ���� �����Ѵ�.
			�� �� = �迭��üũ�� / �� ���� ũ��
			        sizeof(list) / sizeof(list[0]) �ַ� ��� // �������迭���� �ε��� 1���� ������ ���� �ǹ��Ѵ�
					sizeof(list) / sizeof(list[1])
					sizeof(list) / sizeof(list[2]) ��� ����
	
*/
#include <stdio.h>

void example1() {
	int list [3][2] = {1, 2, 3, 4, 5, 6};
	int (*ptr)[2] = list; // 2���� �迭 �߿��� ���� 2���� 2���� �迭�� ������ �� �ִ� �����ͺ����̴�.
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d\t", ptr[i][j]); //list[i][j] ����
		}
		printf("\n");
	}
}

void example2(int (*ptr)[2], int row) { // [row][2] �ڵ������� ������� ������ // �迭�� �ּ� , �� // �� �տ� ������ �������ָ� �����̾ȵǱ⶧��
	int i, j;

	for (i = 0; i < row; i++) { // �� : row
		for (j = 0; j < 2; j++) { // �� : column
			printf("%d\t", ptr[i][j]); 
		}
		printf("\n");
	}
}

int main() {
	int list[3][2] = {10, 20, 30, 40, 50, 60};
	example2(list, sizeof(list) / sizeof(list[0])); // sizeof(list) / sizeof(list[0]) �� ���ϴ°� ���� �ڵ������� ����´�
	example1();
	return 0;
}