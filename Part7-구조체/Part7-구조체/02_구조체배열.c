#include <stdio.h>
//#include <string.h> // str ������ ��ߵ�!, strcpy(woman.name, "samanda"); �̷��� ������ �־����

void example1() {
	//1. ����ü ����
	struct person {
		int age;
		char name[20];
};
	//2. ����ü �迭�� ����
	struct person people[3]; // peopl3[0], people[1], people[2]
	//people[0].age, people[0].name
	//people[1].age, people[1].name
	//people[2].age, people[2].name
	//3. ����ü �迭�� ��ȸ(�Է� �ޱ�)
	int i; // �迭�� ���ǹǷ� �ε����� �ʿ���
	for ( i = 0; i < 3; i++ ) {
		printf("���� �Է� >> ");
		scanf("%d", &people[i].age);
		getchar(); //scanf ���� ����
		printf("�̸� �Է� >> ");
		gets(people[i].name);
	}
	//4. ����ü �迭�� ��ȸ (Ȯ��)
	for ( i = 0; i < 3; i++ ) {
		printf("���� : %d, �̸� : %s \n", people[i].age, people[i].name);
	}
	}

void example2() {
	// 1. ����ü ����
	struct mark {
		char grade;
		int kor;
		int eng;
		int mat;
		double ave;
	};
	// 2. ����ü �迭 ����
	struct mark midterm[2];
	// 3. ����ü �迭 ��ȸ (���� �Է� �ޱ�)
	int i;
	for ( i = 0; i < 2; i++) {
		// 1) ���� 3���� �Է�
		printf("%d��° ���� ���� �Է� >> ", i + 1);
		scanf("%d", &midterm[i].kor);
		printf("%d��° ���� ���� �Է� >> ", i + 1);
		scanf("%d", &midterm[i].eng);
		printf("%d��° ���� ���� �Է� >> ", i + 1);
		scanf("%d", &midterm[i].mat);
		// 2) ��հ� ������ ���
		midterm[i].ave = (midterm[i].kor + midterm[i].eng + midterm[i].mat) / 3.0;
		if ( midterm[i].ave >= 90) {
			midterm[i].grade = 'A';
		} else if ( midterm[i].ave >= 80) {
			midterm[i].grade = 'B';
		} else if ( midterm[i].ave >= 70) {
			midterm[i].grade = 'C';
		} else if ( midterm[i].ave >= 60) {
			midterm[i].grade = 'D';
		} else {
			midterm[i].grade = 'F';
		}
	} // end for
	//4. ����ü �迭 ��ȸ (��� Ȯ��)
	for ( i = 0; i < 2; i++) {
		printf("%d��° ���� �ȳ� \n", i + 1);
		printf("    ���� : %d, ���� : %d, ���� : %d\n", midterm[i].kor, midterm[i].eng, midterm[i].mat);
		printf("    ��� : %1.f(���� : %c)\n", midterm[i].ave, midterm[i].grade);
	}
}

int main() {
	example1();
	example2();
	return 0;
}