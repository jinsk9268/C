#include <stdio.h>
#include <string.h>

int main() {
	char word[10] = "hello";
	char copy[10]; // word �迭�� ������ ���ڿ��� ������ �迭

	//�߿� (�迭�� �̸��� �迭�� �ּ��̱� ������ �Ʒ� ������ �ּҸ� ��ȯ�Ϸ��� �õ��̴�)
	//copy = word; // �Ұ��� �۾�

	strcpy(copy, word); // copy <- word �������� ���簡 ����ȴ�. strcpy_s

	//����
	strcpy_s(copy, sizeof(copy), word);

	printf("����� ���ڿ�: %s \n", copy);

	return 0;
}