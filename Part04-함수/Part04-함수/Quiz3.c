/*
	����.bmi ����ϱ�
		Ű(cm) , ������(kg)�� �Է� �޾Ƽ� �ش��ϴ� bmi�� ��ȯ�ϴ� getBMI�Լ��� �����Ͻÿ�.
		BMI = ������(kg) / Ű(m)�� ����
		���� bmi�� ���� �������� ����ϴ� obesityInfo �Լ��� �����Ͻÿ�.
		20 ���ϴ� "��ü��"
		21~25 "����ü��"
		26~30 "��ü��"
		30 �ʰ��� "��"
*/

#include <stdio.h>
#include <math.h>

double getBMI(double h, double w) {
	double weight = w;
	double height = h / 100;
	return weight / pow(height,2);
}

void obestityInfo(double h, double w){
	double bmi = getBMI(h,w); // double getBMI return���� ���⿡ ����
	if (bmi <= 20) {
		printf("��ü��\n");
	} else if (bmi <= 25) {
		printf("����ü��\n");
	} else if (bmi <= 30) {
		printf("��ü��\n");
	} else {
		printf("��\n");
	}
}

int main() {
	double height, weight;
	printf("Ű(cm) >> "); scanf_s("%lf", &height);
	printf("������(kg) >> "); scanf_s("%lf", &weight);
	obestityInfo(height, weight);

	return 0;
}