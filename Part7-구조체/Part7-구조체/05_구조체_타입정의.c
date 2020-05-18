#include <stdio.h>

void example1() {
	typedef int Data; // int Ÿ�� -> Data Ÿ��
	typedef int* Pointer; // int* Ÿ�� -> Pointer Ÿ��
	Data num = 100; // int num = 100;
	Pointer ptr = &num; // int* ptr = &num;
	printf("%d \n", num);
	printf("%d \n", *ptr);
}

void example2() {
	//1.����ü ����
	struct person {
		int age;
		char name[20];
	};
	//2.����ü Ÿ���� ����
	typedef struct person Person;
	//3.���ο� ����ü Ÿ������ ���� ����
	//struct person human;
	Person human = {20, "alice"};
	//4.Ȯ��
	printf("���� : %d, �̸� : %s \n", human.age, human.name);

}

void example3() {
	//1. ����ü ���� + ����ü Ÿ�� ���� (��õ)
	typedef struct person { // person ������ ���� ���� // _person ��������
		int age;
		char name[20];
	} Person;
	//2. ���ο� ����ü Ÿ������ ���� ����
	Person human = {20, "alice"};
	//3.Ȯ��
	printf("���� : %d, �̸� : %s \n", human.age, human.name);

}

int main() {
	example1();
	example2();
	example3();
	return 0;
}