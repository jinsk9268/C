/*
	����. 3��¥�� ����Ʈ�� �ִ� 1ȣ, 2ȣ �������� �����Ǿ��ִ�
		�� �� / �� ȣ ���� �� ���� ��� �ִ��� �Է� ���� ��
		��ü �ο����� ����Ͻÿ�
	����. ������ ��ü(2~9)�� ����� �迭�� �����Ͻÿ�.
			����� ����� �������� ����Ͻÿ�.
*/

#include <stdio.h>

void quiz1() {
	int apt[3][2];
	int i, j;
	int total = 0;

	for ( i = 0; i < 3; i++) {
		printf("%d�� �Դϴ�.\n", i +1); // ������ ���ٶ��
		for ( j = 0; j < 2; j++) {
			//printf ("%d�� %dȣ�� ��� ����� �� >> ", i+1, j+1);
			printf("%5dȣ�� �� ���� ��ϱ�? >>", j+1);
			scanf_s("%d", &apt[i][j]);
			total += apt[i][j]; // ����Ʈ�� ��� �ο��� i�� jȣ
		}
		printf("\n");
	}
	
	printf("�� �ο��� %d�� �Դϴ�\n", total);
}

void quiz2() {
	int gugudan[8][9];
	int i, j;
	//��� ����
	for ( i = 0; i < 8; i++) {
		for ( j = 0; j < 9; j++) {
			gugudan[i][j] = (i + 2) * (j + 1);
		}
	}
	//���
	for ( i = 0; i < 8; i++) {
		printf("%d�� �Դϴ�.\n", i + 2);
		for ( j = 0; j < 9; j++ ) {
			printf("%3dX%d=%d\n", i + 2, j + 1, gugudan[i][j]);
		}
		printf("\n");
	}		
}

int main() {
	//quiz1();
	quiz2();
	return 0;
}