/*
   ����. �Է� ���� ������ �ش��ϴ� �������� ����Ͻÿ�.
   ����. 1 ~ 100 ���� ��� ������ �����Ͽ� ����Ͻÿ�.
   ����. 5�� ��ǰ�� ������ �Է¹޾Ƽ� �� ���ž��� ����Ͻÿ�.
*/

#include <stdio.h>

void quiz1() {
	int dan, n;
	printf("����� ����ұ��? >>");
	scanf_s("%d", &dan);

	for ( n = 1 ; n <10 ; n++) {
		printf ("%d * %d = %d \n", dan, n, dan*n);
	}
}

void quiz2() {
	int total = 0; //����
	int n; // 1~100���� ������ ����
	// total += 1
	// total += 2
	// ...
	// total += 100
	// total += n

	for (n=1 ; n < 101 ; n++) {
		total += n;
	}

	printf("���� %d �Դϴ�.\n", total);
}

void quiz3() {
	int total = 0; // total �� �ʱ�ȭ�� 0
	int price;
	int n; // 5�� �ݺ���Ű�� ����

	for (n=0 ; n<5 ; n++) {
	printf ("%d��° ��ǰ ���� �Է� >> ", n + 1); // ȸ�� ������ ��ŸƮ 0���� ���� ����
	scanf_s ("%d", &price);
	total += price;
	}

	printf ("��ǰ�� �� ������ %d�Դϴ�\n" , total);
}


int main() {
	//quiz1();
	//quiz2(); // �Լ��� ȣ�� (ȣ���� �Լ��� �����Ѵ�)
	quiz3();
	return 0;
}