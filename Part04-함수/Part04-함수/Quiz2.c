/*
	����. �빮�ڸ� �����ϸ� �ҹ��ڷ� ��ȯ�ؼ� ����ϴ� toLower �Լ���
		  �ҹ��ڸ� �����ϸ� �빮�ڷ� ��ȯ�ؼ� ����ϴ� toUpper �Լ��� �����Ͻÿ�.
*/

#include <stdio.h>

void toLower(char ch) {

	if ( ch < 'A' || ch > 'Z') {
		printf("�빮�ڰ� �ƴϱ� ������ ��ȯ�� �� �����ϴ�.\n");
		return;
	} 
	printf("�빮�� %c�� �ҹ��ڷ� %c�Դϴ�.\n", ch, ch+32);
}

void toUpper(char ch) {
	if (ch < 'a' || ch > 'z') {
		printf("�ҹ��ڰ� �ƴϱ� ������ ��ȯ�� �� �����ϴ�.\n");
		return;
	}
	printf("�ҹ��� %c�� �빮�ڷ� %c�Դϴ�.\n", ch, ch-32);
}

int main() {
	int choice;
	char alphabet;
	printf ("�޴����� (1. �� -> ��, 2. ��-> ��)�ϼ���.\n");
	printf ("���� >> ");
	scanf_s("%d", &choice); // 1 ������ ���� ������ ���ĺ����ΰ� ���� �����̱⶧��
	printf("��ȯ�� ���ĺ� �Է� >> ");
	scanf_s(" %c", &alphabet); // %c�տ� �����̽� ������ ���ʿ��� ���鹮�� ó��

	switch ( choice ) {
	case 1: toLower(alphabet);
		break;
	case 2: toUpper(alphabet);
		break;
	default : printf("���� �޴�\n");
	}

	return 0;
}