#include <stdio.h>

void example1() {
	char word[10]; // �ִ� 9��(���� ����), �ʰ��Ǹ� ������
	printf("���ڿ� �Է� >> ");
	gets(word);
	printf("�Էµ� ���ڿ� : %s\n", word);
}

void example2() {
	char word[10];
	printf("���ڿ� �Է� >> ");
	fgets(word, sizeof(word), stdin); // �Ѿ�� �߶󳽴�
	// 1. word : ���ڿ��� �Էµ� �迭
	// 2. sizeof(word) : ������ 10, �Է� ������ �ִ� ���ڼ�
	// 3. stdin (standard input strim) : ǥ�� �Է� ��Ʈ�� (Ű���带 ���� �Է� ���)
	printf("�Էµ� ���ڿ� : %s\n", word);
}

void example3() {
	char word[10] = "hello";
	puts(word); // ����ϰ� �ڵ� �ٹٲ�
	printf("end of example3\n");
}

void example4() {
	char word[10] = "hello";
	fputs(word, stdout); // �״�� ���
	//stdout (standard out put strim) : ǥ�� ��½�Ʈ��(����͸� ���� ��� ���)
	printf("end of example4\n");
}

int main() {
	example1();
	example2();
	example3();
	example4();
	return 0;
}