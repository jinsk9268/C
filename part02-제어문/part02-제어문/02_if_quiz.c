/*
   ����. ����, ����, ���� ������ �Է� �޾Ƽ� ��հ� ������ ����Ͻÿ�
         ������ ��� 90 �̻��̸� 'A' , 80 �̻��̸� 'B', 70 �̻��̸� 'C', 60 �̻��̸� 'D', �������� 'F'
*/

#include <stdio.h>

void main() {
	int kor, eng, mat;
	double average;
	char grade;

	printf("���� ������? >>"); scanf_s("%d", &kor);
	printf("���� ������? >>"); scanf_s("%d", &eng);
	printf("���� ������? >>"); scanf_s("%d", &mat);

	average = ((double)kor + eng + mat) / 3;

	if ( average <=100 && average >= 90) 
		grade = 'A'; // ���๮ �ϳ��� ��� { ��������
	else if (average >= 80)
		grade = 'B';
	else if (average >= 70)
		grade = 'C';
	else if (average >= 60)
		grade = 'D';
	else 
		grade = 'F';

	printf("���� : %d��, ���� : %d��, ���� : %d��\n", kor, eng, mat);
	printf("��� : %.1f��, ���� : %c��", average, grade);
}