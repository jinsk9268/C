/*
	�Է� ����
	: �Էµ� �����Ͱ� ��� �����Ǵ� �ӽ� �����ҷ� �ӵ� ����� ���� ���ȴ�.
*/

#include <stdio.h>

int main() {
	char birthday[7];
	char name[100];

	printf("����6�ڸ� �Է� >> ");
	scanf("%s", birthday); // 1.���ڿ� 6�ڸ��� birthday�� �����Ų��. + '\n' �Է� ���ۿ� ���� ���´�
	
	// 3. ���) �Է� ���ۿ� ����� '\n'�� ������ �ʿ䰡 �ִ�.
	getchar(); // gatchar() :  �Է� ���ۿ� ����� ���ڸ� �ϳ��� �д� �Լ�


	printf("�̸� �Է� >> ");
	gets(name); //fgets(name, sizeof(name), stdin); // 2. scanf�� ���ܳ��� '\n'�� �Է����� ó���Ѵ�

	printf("������� 6�ڸ� : %s \n", birthday);
	printf("�̸� : %s \n", name);

	return 0;
}