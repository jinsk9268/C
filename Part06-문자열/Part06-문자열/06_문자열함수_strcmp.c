#include <stdio.h>
#include <string.h>

int main() {

	// compare : ���ϴ�

	char word1[10] = "hello";
	char word2[10] = "hello";

	//���� ������ : ==
	// word1�� word2�� �迭�� �ּ��̱� ������ �� �迭�� �ּҰ� ������ ���� ���̴�. 
	if (word1 == word2) {
		puts("���� ���ڿ��̴�");
	} else {
		puts("�ٸ� ���ڿ��̴�");
	}

	// �� ���ڿ��� �� ����� �� ���ڿ��� ���̷� ���Ѵ�.
	// 1. ���� ���ڿ��� ũ�� : 1
	// 2. ���� ���ڿ��� ũ�� : -1
	// 3. �� ���ڿ��� ������ : 0 (false �� �ǹ�)

	printf("�� ��� : %d \n", strcmp(word1, word2));

	if ( !strcmp(word1, word2) ) { // ������ �����̴� else�� �Ѿ, �տ� !�ٿ��� ó��
		puts("���� ���ڿ��̴�");
	} else {
		puts("�ٸ� ���ڿ��̴�");
	} 

	  return 0;
}