#include <stdio.h>

void example1() {
	//1. ����ü ����
	struct person {
		char gender; // M, F
		int age;
		double height;
		char name[20];
	};
	//2. ����ü ���� human�� ����
	struct person human = {'F', 20, 170.5, "alice"};
	//3. ����ü ������ ���� ptr�� ����
	struct person *ptr;
	//4. ������ ���� ptr �� human�� �ּҰ� ����
	ptr = &human;
	//5. ������ ���� ptr �� �̿��� human�� ���(�ʵ�) ����
	//�����͸� �̿��ϴ� ��� : .(��ħǥ) ��� ->(ȭ��ǥ) �� ����Ѵ�.
	printf("���� : %c \n", ptr->gender);
	printf("���� : %d \n", ptr->age);
	printf("Ű : %.1f \n", ptr->height);
	printf("�̸� : %s \n", ptr->name);

}

void example2() {
	//1.����ü ����
	struct wallet {
		int money;
		char card[20];
	};
	struct person {
		char name[20];
		struct wallet *w; // ����ü ������ ���� : w
	};
	//2.����ü ���� ����
	struct wallet w = {50000, "woori card"};
	struct person p = {"alice", &w};
	//3.Ȯ��
	printf("���� : %s \n", p.name);
	printf("���� : %d \n", p.w->money);
	printf("ī�� : %s \n", p.w->card);

}

int main() {
	example1();
	example2();
	return 0;
}