/*
	����1. 1~100 ���� �����ϴٰ� totol �� 3000���� Ŀ���� �׸� �����ϰ� 
			�������ͼ� total �� Ȯ���Ͻÿ�.

	����2. ������ ����ؼ� �Է� �޾Ƽ� ��� �����Ͻÿ�. ������ �ԷµǸ� �׸��Ͻÿ�.
	����3. while ���ѷ����� ����
*/

#include <stdio.h>

void quiz1() {
	int total = 0;
	int n = 1;

	while (total <= 3000) { // total �� 3000������ ������ 3000���ϴ� ���ض�, 3000 �Ѿ�� ������� ���´�
		total += n;
		n++;
	}

	/*
	for ( n = 1, total <= 3000; n++ ){
		total += n;
	}
	*/
	printf("3000 ���� ū ������ %d�� ó���Դϴ�\n", total);
}

void quiz2(){
	int total = 0;
	int n;
	printf("�Է� (�����̸� ����) >>");
	scanf_s("%d", &n);
	while (n >= 0) { // 0 �̻��� ���� �����൵ ������
		total += n;
		printf("�Է� (�����̸� ����) >>");
		scanf_s("%d", &n);
		
}
	printf("�� ������ %d�Դϴ�.\n" , total);
}

void quiz3(){
	int total = 0;
	int n;
	while (1) {
		printf("�Է� (�����̸� ����) >>");
		scanf_s("%d", &n);
		if ( n < 0) {
			break;
		}
		total += n;
	}
	printf("�� ������ %d�Դϴ�.\n" , total);
}

int main(){
	//quiz1();
	//quiz2();
	quiz3();
	return 0;
}