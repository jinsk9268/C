/*
	����. scanf �Լ��� �̿��Ͽ� n�� ������ ������ �Է� �޾� ����Ͻÿ�.
	��, scanf �Լ����� &�� ������� ���ÿ�.
*/
#include <stdio.h>

void quiz1() {
	int n;
	int *ptr = &n;
	printf("������ ���� n�� �Է��ϼ��� >> ");
	scanf("%d", ptr); // *���̸� �ȵ�, ptr�� n�� �ּҰ� �ԷµǾ� �����ϱ�
	printf("n=%d\n", n);
}

int main() {
	quiz1();
	return 0;
}