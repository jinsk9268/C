/*
	����. �迭�� ����� ��� ��Ҹ� ������� ����ϴ� �Լ��� �����Ͻÿ�.
*/
#include <stdio.h>

void quiz3(int list[], int length) { //�迭�� �ּҸ� ������ �� ����ϴ� �Ű����� ������
	int i;
	for (i = 0; i < length; i++) {
		printf("%d��° ��� = %d\n", i+1, list[i]);
	}
}

int main() {
	int list[] = {10, 20, 30, 40, 50};
	quiz3(list, sizeof(list) / sizeof(int));
	return 0;
}