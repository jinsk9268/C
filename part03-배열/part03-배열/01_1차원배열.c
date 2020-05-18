/*
	1�����迭 (Array)

	1. ���� Ÿ���� �����͸� ������ ������ �� �ִ� �����̴�.
	2. ���ӵ� �޸� ������ ����Ѵ�.
	3. �迭�� ���̰� �������� ���� ������ �����ϴ�.
	4. ���� ���
		int arr[3]; // ���̰� 3�� int �� arr �迭 ���� (int�� 3�� ����)
				    // int a, b, c; �� ���� ���� ����
					// ������ �̸��� �����ؼ� ����� �� �ִ�
		1) �迭 �̸� : arr
		2) �迭 ���� : 3
		3) �迭 �ε���(��ȣ) : 0, 1, 2 (0 ~ ����-1)
*/

#include <stdio.h>

// �Լ��� "����" : �Լ��� �����.
void example1() {
	int arr[3]; // ������ ����, c������ ���̸� ����ְ� ���� �����ʾƼ�, ���� ���� ������ ����� �� ����
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
}

void example2() {
	int arr1[3] = {10, 20, 30}; // �ʱ�ȭ ���
	int arr2[] = {40, 50, 60}; // �ʱ�ȭ�� �ϴ� ��쿡�� ���� ������ �����ϴ�.
	int arr3[3] = {70}; // {70, 0, 0} �� ���� ���·� �ʱ�ȭ�� �����Ѵ�.
	printf("%d %d %d\n", arr1[0], arr1[1], arr1[2]);
	printf("%d %d %d\n", arr2[0], arr2[1], arr2[2]);
	printf("%d %d %d\n", arr3[0], arr3[1], arr3[2]);
}

void example3() {
	int arr[3] = {10, 20, 30};
	int i; // �迭�ε��� (0 ~ 2)
	for ( i = 0; i < 3; i++) {
		printf("%4d", arr[i]); // %4d : 4�ڸ� ������ ����Ѵ�. �����̽� ��� ���� ���� ���� --10 --20
	}
	printf("\n");
}

void example4() {
	/*
		int arr[3];
		sizeof(arr) : �迭�� ��ü ũ�� (int�� 3�� �ִ�.) -> 12 (����Ʈ)
		sizeof(int) : int Ÿ���� ũ�� -> 4 (����Ʈ)
		sizeof(arr) / sizeof(int) : �迭�� ���� ���� -> 3 (��)
		c���� ���������־ �ý����� ���ؼ� �˾Ƴ��ߵǱ� �����̴�
	*/
	int arr[3] = {10, 20, 30};
	int i;
	int length; // �迭�� ����(3)
	for ( i = 0, length = sizeof(arr) / sizeof(int); i < length; i++){  // 0���� �����ϱ⶧���� ���̺��� �۾ƾ���, �ڹٴ� i < arr.length()
		printf("%-4d", arr[i]); // �տ� ��� 10-- 20--
	}
	printf("\n");
}

void example5() {
	int arr[3];
	int i;
	int length;
	length = sizeof(arr) / sizeof(int);
	// 1. �Է�
	for ( i = 0; i < length; i++) {
		printf("%d��° �Է� >> ", i + 1);
		scanf_s("%d", &arr[i]); // �迭��� : �迭�� �����ϴ� �� ����
	}
	// 2. ���
	for (i = 0; i < length; i++) {
		printf("%d \n", arr[i]);
	}
}


int main() {
	//example1(); // �Լ��� "ȣ��" : �Լ��� ����Ѵ�.
	//example2();
	//example3();
	//example4();
	example5();
	return 0;
}