#include <stdio.h>

void example1() {
	// list �迭�� �ּ�
    // 1. list (�̹� ��ü�� �ּ�)
	// 2. &list[0] (ù ��° ����� �ּ�)
	int list[3] = {100, 200, 300};
	int i; // �ε��� (0~2)
	
	printf("list[0]�� �ּ� : %p(%d) \n", list + 0, list + 0);
	printf("list[1]�� �ּ� : %p(%d) \n", list + 1, list + 1);
	printf("list[2]�� �ּ� : %p(%d) \n", list + 2, list + 2);

}

void example2() {
	int list[3] = {100, 200, 300};
	int i; // �ε��� (0~2)
	
	printf("list[0]�� �� : %d, %d \n", *(list + 0), list[0]);
	printf("list[1]�� �� : %d, %d \n", *(list + 1), list[1]);
	printf("list[2]�� �� : %d, %d \n", *(list + 2), list[2]);
}

void example3() {
	int list[3] = {100, 200, 300};
	int *ptr = list; // �迭�� �̸��� ��ü�� �ּҰ��̴�.
	printf("list[0]�� �� : %d, %d \n", list[0], ptr[0]); // �迭�� �ּҸ� ������ ������ ������ �迭ó�� ����Ѵ�.
	printf("list[1]�� �� : %d, %d \n", list[1], ptr[1]);
	printf("list[2]�� �� : %d, %d \n", list[2], ptr[2]);
}

int main() {
	example1();
	example2();
	example3();
	return 0;
}