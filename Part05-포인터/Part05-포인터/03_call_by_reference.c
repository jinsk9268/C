#include <stdio.h>

void plusOne(int *ptr) {
	(*ptr)++; // *ptr -> ++ (���� ������ ����)
	//*ptr++; // ptr++ -> * (���� �ּ��� ��) -> �ȵ�!!!!
}

int main() {
	int n = 100;
	printf("���� �� : %d\n", n);
	plusOne(&n); // �ּҰ��� ���� �Լ� ȣ���� call by reterence��� �Ѵ�
	printf("���� �� : %d\n", n);
	return 0;
}