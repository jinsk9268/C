#include <stdio.h>

void example1() {
	//1. ����ü ����
	struct wallet {
		int money;
		char card[20];
	};
	struct person {
		char name[20];
		struct wallet w; // ����ü ���� w�� ����
	};
	// 2. ����ü ���� ���� (human)
	struct person human = {"alice", {50000, "woori card"}};
	// 3. Ȯ��
	printf("�̸� : %s \n", human.name);
	printf("���� : %d \n", human.w.money);
	printf("ī�� : %s \n", human.w.card);
}

void example2() {
	//1. ����ü ����
	struct mark {
		int score1;
		int score2;
		double ave;
	};
	struct student {
		char name[20];
		char dept[20]; // �а�, �μ�
		struct mark midterm;
	};
	// 2. ����ü ������ ���� (s)
	struct student s;
	// 3. ������ �Է�
	printf("�л��� �̸��� �Է��ϼ��� >> ");
	gets(s.name); // student�� ������ s�̹Ƿ�
	printf("�л��� �а��� �Է��ϼ��� >> ");
	fgets(s.dept, sizeof(s.dept), stdin); // stdin Ű���带 ���� �Է�
	printf("�л��� ù��° ������ �Է��ϼ��� >> ");
	scanf("%d", &s.midterm.score1); //  score1�� int ���̱� ������ & ���̱�
	printf("�л��� �ι�° ������ �Է��ϼ��� >> ");
	scanf("%d", &s.midterm.score2);
	s.midterm.ave = (s.midterm.score1 + s.midterm.score2) / 2.0;
	// 4. Ȯ��
	printf("�л��� : %s, �а��� : %s \n", s.name, s.dept);
	printf("ù��° ������ %d��, �ι�° ������ %d��, ����� %1.f�� �Դϴ� \n", s.midterm.score1, s. midterm.score2, s.midterm.ave);
}
 
int main() {
	example1();
	example2();
	return 0;
}