/*
	����ü (struct)

	1. ���� �ٸ� �ڷ���(Ÿ��)�� ������ ���� ���� ������ �ϳ��� �ڷ������� ��� ����ϴ� ���̴�.
	2. ����ü�� ���� ��(����ü ����)�� ���(����ü ����)�Ѵ�.
	3. ����ü ���� ���
		struct ����ü�� {
			// ��� ����(�ʵ�)�� ����;
		};
	4. ����ü ���� ���
		struct ����ü�� ����ü������;
*/

#include <stdio.h>
#include <string.h>


void example1() {
	//1. ����ü ���� (�����)
	struct person {
		char gender; // ���� (M, F)
		int age; // ����
		double height; // Ű
		char name[20]; // �̸�
	};
	//2. ����ü ���� (man, woman �� ����Ѵ�.)
	struct person man;
	struct person woman;
	//3. ����ü ���� man, woman �� ������ �����ϱ�, �ʱ�ȭ�� �ƴ�
	man.gender = 'M'; // '.' ~��
	man.age = 20;
	man.height = 180.5;
	//man.name = "will bliss" // man.name �� �迭�� �ּ��̱� ������ �ּҸ� �����Ϸ��� �õ��̴�. �Ұ����ϴ�.
	strcpy(man.name, "will bliss"); 
	woman.gender = 'F';
	woman.age = 30;
	woman.height = 161.5;
	strcpy(woman.name, "samanda");
	//4. Ȯ��
	printf("����: %c, ����: %d, Ű: %.1f, �̸�: %s \n", man.gender, man.age, man.height, man.name);
	printf("����: %c, ����: %d, Ű: %.1f, �̸�: %s \n", woman.gender, woman.age, woman.height, woman.name);

}

void example2() {
	// 1. ����ü ����
	struct car{
		int year;
		int price;
		char model[20];
	};
	// 2. ����ü ������ ���� �׸��� �ʱ�ȭ
	struct car myCar = {2020, 3000, "�ҳ�Ÿ"};
	// 3. Ȯ��
	printf("���� : %d, ���� : %d, �� : %s\n", myCar.year, myCar.price, myCar.model);

}

void example3() {
	//1. ����ü ����
	struct book {
		char rental; // Y, N
		int pages;
		char title[50];
	};
	//2. ����ü ������ ����
	struct book myBook;
	//3. ����ü ������ ������ �Է� �ޱ�
	printf("��Ż ����(Y/N) >> ");
	scanf("%c", &myBook.rental);
	printf("������ �� >> ");
	scanf("%d", &myBook.pages); // scanf �Լ��� \n�� �Է� ���ۿ����ܵд�
	getchar();
	printf("���� >> ");
	//gets(myBook.title);
	fgets(myBook.title, sizeof(myBook.title), stdin);
	// 4. Ȯ��
	printf("��Ż���� : %c, ������ �� : %d, ���� : %s \n", myBook.rental, myBook.pages, myBook.title);
}

int main() {
	example1();
	example2();
	example3();
	return 0;
}