/*
   ����. ������ 1~3 ���� �ִ�.
         ������ 1�̸� "�б�"
		 ������ 2�̸� "�б�" , "����"
		 ������ 3�̸� "�б�" , "����" , "����"
		 �̿ܿ��� "���� ����"
		 
   ����. ����, ����, ���� ������ �Է� �޾Ƽ� ��հ� ������ ����Ͻÿ�
         switch�� ���� : ������ ��� 90 �̻��̸� 'A' , 80 �̻��̸� 'B', 70 �̻��̸� 'C', 60 �̻��̸� 'D', �������� 'F'
*/

#include <stdio.h>

// quiz1 �Լ��� "����" : �Լ��� �����
void quiz1() {
	int n;

	printf ("������ �Է� (1~3) >> ");
	scanf_s ("%d", &n);

	switch (n) {
	case 3: printf("����, ");
	case 2: printf("����, ");
	case 1: printf("�б�\n");
		break;
	default: printf("���� ����\n");
	}
}

void quiz2() {
	int kor, eng, mat;
	double average;
	char grade;

	printf("���� ������? >>"); scanf_s("%d", &kor);
	printf("���� ������? >>"); scanf_s("%d", &eng);
	printf("���� ������? >>"); scanf_s("%d", &mat);

	average = (kor + eng + mat) / 3.0;

	switch ( (int)average / 10 ) {
	case 10:
	case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
    case 6: grade = 'D'; break;
	default: grade = 'F';
	}
	printf("���: %.1f, ����: %c����\n", average, grade);
}

int main() {
	// quiz1(); //quiz1 �Լ��� "ȣ��" : �Լ��� �����Ѵ�.
	quiz2();

	return 0;
}