#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int * list; // �迭�� �� ����
	int length; // �迭�� ����
	int i; // �迭�� �ε���

	printf("���ݺ��� ����ڰ� ���ϴ� ũ���� �迭�� ����ϴ�.\n");

	printf("���ϴ� �迭�� ũ�⸦ �Է��ϰԿ� >> ");
	scanf("%d", &length);

	list = (int *)malloc(sizeof(int) * length);

	for ( i = 0; i < length; i++) {
		printf("�Է� >> ");
		scanf("%d", &list[i]);
	}

	for ( i = 0; i < length; i++) {
		printf("�Էµ� %d��° ���� : %d \n", i + 1, list[i]);
	}

	free(list); // �޸� ���� ������ ���ؼ� �ý��ۿ� �޸� ���� �ݳ� (c���� �� �ϱ� ������, �ڹٿ����� ��������)

	return 0;
}
