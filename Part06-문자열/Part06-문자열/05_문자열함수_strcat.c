#include <stdio.h>
#include <string.h>

int main() {
	
	// concatenate : �����Ѵ�

	char word1[10] = "happy";
	char word2[10] = "birthday";

	char result[20]; // word1 + word2 ����� ������ �迭

	strcpy(result, word1); // �켱 ù �ܾ result �� ������ ���´�.
	strcat(result, " "); // ���� �ְ� ������
	strcat (result, word2); // result �� ����� ���ڿ� �ڿ� word2�� ���ڿ��� �����Ѵ�.

	printf("����� ���ڿ�: %s \n", result);

	return 0;
}