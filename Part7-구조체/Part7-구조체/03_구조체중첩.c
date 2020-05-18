#include <stdio.h>

void example1() {
	//1. 구조체 정의
	struct wallet {
		int money;
		char card[20];
	};
	struct person {
		char name[20];
		struct wallet w; // 구조체 변수 w의 선언
	};
	// 2. 구조체 변수 선언 (human)
	struct person human = {"alice", {50000, "woori card"}};
	// 3. 확인
	printf("이름 : %s \n", human.name);
	printf("현금 : %d \n", human.w.money);
	printf("카드 : %s \n", human.w.card);
}

void example2() {
	//1. 구조체 정의
	struct mark {
		int score1;
		int score2;
		double ave;
	};
	struct student {
		char name[20];
		char dept[20]; // 학과, 부서
		struct mark midterm;
	};
	// 2. 구조체 변수의 선언 (s)
	struct student s;
	// 3. 데이터 입력
	printf("학생의 이름을 입력하세요 >> ");
	gets(s.name); // student의 변수가 s이므로
	printf("학생의 학과를 입력하세요 >> ");
	fgets(s.dept, sizeof(s.dept), stdin); // stdin 키보드를 통한 입력
	printf("학생의 첫번째 점수를 입력하세요 >> ");
	scanf("%d", &s.midterm.score1); //  score1은 int 값이기 때문에 & 붙이기
	printf("학생의 두번째 점수를 입력하세요 >> ");
	scanf("%d", &s.midterm.score2);
	s.midterm.ave = (s.midterm.score1 + s.midterm.score2) / 2.0;
	// 4. 확인
	printf("학생명 : %s, 학과명 : %s \n", s.name, s.dept);
	printf("첫번째 점수는 %d점, 두번째 점수는 %d점, 평균은 %1.f점 입니다 \n", s.midterm.score1, s. midterm.score2, s.midterm.ave);
}
 
int main() {
	example1();
	example2();
	return 0;
}