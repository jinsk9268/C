#include <stdio.h>
#include <stdlib.h>

// inputID �Լ�
// 1.�Ķ���� : ���� (void)
// 2.����Ÿ�� : ���� (�Է� ���� ���̵�)
char * inputID(void) {

	// �Էµ� id�� ����� �ּҸ� ������ �ڿ���
	// �ش� ���� �Ҹ��Ű�� �ʰ� �����Ϸ��� 
	// free �� ������ �������� �輮 �����͸� �����ϴ� malloc �� ����ؾ� �Ѵ�.

	char * id = (char *)malloc(sizeof(char) * 20);
	
	printf("������ ���̵� �Է� >> ");
	scanf("%s", id);
	return id; // �Էµ� ���̵��� �ּҸ� �����ϱ� ������ ����Ÿ���� char * �̴�
}

// outputID �Լ�
// 1. �Ķ���� : ���� (���̵�)
// 2. ����Ÿ�� : ���� (void)
void outputID(char * id) { // �Ű����� char id[] �� �����ϴ�.
	printf("�Էµ� ���̵� : %s \n", id);
}

int main() {
	char *id1;
	char *id2;
	id1 = inputID();
	outputID(id1);
	id2 = inputID();
	outputID(id2);

	printf("���ݱ��� �Էµ� ���̵�� ������ �����ϴ�.\n");
	outputID(id1);
	outputID(id2);

	free(id1);
	free(id2);

	return 0;
}