/*
	����. �л��� ���� ������ �Է¹޾Ƽ�(��, ��, ��) ����� ����Ͻÿ�.
	      ���輺���� int scores[3] �� �����Ѵ�.
	����. �л��� ���� ������ �Է¹޾Ƽ�(�� �� �� �� ��) 
	      ���, �ְ�����, ���������� ����Ͻÿ�.
		  ���輺���� int scores[6] �� �����Ѵ�
		  scores[0] �� ������� �ʴ´�.
*/

#include <stdio.h> 

void quiz1() {
	int scores[3];
	int i;
	int length;
	int total = 0;
	double average;

	length = sizeof(scores) / sizeof(int);

	for (i = 0; i < length; i++) {
		printf("%d��° ���� �Է��Ͻÿ� >> ", i + 1);
	    scanf_s("%d", &scores[i]); // ���� �̸�
		total += scores[i];
	}
	 average = (double)total / length;
	 printf("����� %.1f�� �Դϴ�.\n", average);
}

void quiz2() {
	int scores[6];
	int i;
	int length;
	int total; // �ʱ�ȭ ������ ����
	int max; // �ִ�
	int min; // �ּ�
	double average;

	length = sizeof(scores) / sizeof(int);

	for (i=1; i < length; i++) {
		printf("%d��° ������ �Է� >>",i);
		scanf_s("%d", &scores[i]);
	}
	// ù��° ������ �ʱ�ȭ�� �����Ѵ�.
	total = scores[1];
	max = scores[1];
	min = scores[1];

	// �հ�, �ִ�, �ּ� ���ϱ�
	for ( i = 2; i < length; i++) {
		total += scores[i]; // ù��° ���� �ʱ�ȭ�� ���ؼ� �����߱⶧����, 1�� �ϸ� ���ߴ� ���� �Ǵ��ϴϱ� 2�� ����
		if ( max < scores[i] ) { 
			max = scores[i]; // ������ ū�� ������ �װŷ� ����Ÿ�ڴ�
		} 
		if ( min > scores[i] ) {
			min = scores[i]; // ������ ������ ������ �װŷ� ����Ÿ�ڴ�
		}
	}

	average = (double)total / (length-1);
	printf("��� %.1f�� , �ִ� %d��, �ּ� %d��.\n", average, max, min);

}

int main() {
	//quiz1();
	quiz2();
	return 0;
}