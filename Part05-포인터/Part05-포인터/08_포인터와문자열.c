#include <stdio.h>

void example1() {
	char *name = "�ٸ���";
	char *phone = "010-1234-5678";
	char *address;
	address = "����� ������ ������";
	printf("�� �̸��� %s�Դϴ�.\n", name);
	printf("�� ����ó�� %s�Դϴ�.\n", phone);
	printf("���� ��� ���� %s�Դϴ�.\n", address);
}

void example2() {
	// char *names[3] : �ּҸ� 3�� �����ϴ� �迭�̹Ƿ� ���ڿ��� 3���� ������ �� �ִ�
	char *names[3] = {"alice", "james", "david"};
	printf("ù ��° ģ���� %s�Դϴ�.\n", names[0]);
	printf("�� ��° ģ���� %s�Դϴ�.\n", names[1]);
	printf("�� ��° ģ���� %s�Դϴ�.\n", names[2]);
}

void example3() {
	char *names[3] = {"james", "david", "john"};
	int i;
	for (i=0; i < 3; i++) {
		printf("%d��° ģ���� %s�Դϴ�.\n", i + 1, names[i]);
	}
}

void example4() {
	char *subject[3] = {"����","����", "����"};
	int scores[3];
	int i;
	for (i = 0; i < 3; i++) {
		printf("%s ���� ���� >> ", subject[i]);
		scanf_s("%d", &scores[i]);
	}
}

int main() {
	example1();
	example2();
	example3();
	example4();
	return 0;
}