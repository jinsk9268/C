/* 
	����. ���̸� �Է¹޾Ƽ� �����ϸ� 
	      ���̿����� ����� �����ϴ� ageFunction �Լ��� �����Ͻÿ�.
		  7 ���� : �����оƵ�
		  13 ���� : �ʵ��л�
		  16 ���� : ���л�
		  19 ���� : ����л�
		  ������ : ����
*/


#include <stdio.h>

void ageFunction(int age) { // main�� age�� ageFunction�� �ٸ���
	if (age <= 0 || age >= 130) {
		printf("%d���� �������� �ʴ� �����Դϴ�.\n", age);
		return;
	}
	if (age <= 7) { // age >= 1 && �������� �߰�
		printf ("�����оƵ�\n");
	} else if (age <= 13) { // ���� 7< age <=13 �̷��� �ߴµ� ���� ������ �ƴϸ� �̴ϱ� 7< ������ �൵ �� �����ָ� ������
		printf ("�ʵ��л�\n");
	} else if (age <= 16) {
		printf ("���л�\n");
	} else if (age <= 19) {
		printf ("����л�\n");
	} else { 
		printf ("����\n");
	}
}

int main() {
	int age;
	printf("����̴�? >>");
	scanf_s("%d", &age);
	ageFunction(age);
	return 0;
}