#include <stdio.h>
#include <string.h> // ���ڿ� �Լ��� ó���ϱ� ���ؼ� �߰�

int main() {
	char word[10] = "hello";

	printf("�迭�� ũ�� : %d \n", sizeof(word));
	printf("���ڿ��� ���� : %d \n", strlen(word)); // NULL�� ����X, �������ڿ��� ���̸� ���(�ι��ڴ� ����)

	return 0;
}