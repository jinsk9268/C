#include <stdio.h>
//#include <string.h> // str 들어갈때는 써야됨!, strcpy(woman.name, "samanda"); 이런거 쓸때는 있어야함

void example1() {
	//1. 구조체 정의
	struct person {
		int age;
		char name[20];
};
	//2. 구조체 배열의 선언
	struct person people[3]; // peopl3[0], people[1], people[2]
	//people[0].age, people[0].name
	//people[1].age, people[1].name
	//people[2].age, people[2].name
	//3. 구조체 배열의 순회(입력 받기)
	int i; // 배열이 사용되므로 인덱스가 필요함
	for ( i = 0; i < 3; i++ ) {
		printf("나이 입력 >> ");
		scanf("%d", &people[i].age);
		getchar(); //scanf 공백 제거
		printf("이름 입력 >> ");
		gets(people[i].name);
	}
	//4. 구조체 배열의 순회 (확인)
	for ( i = 0; i < 3; i++ ) {
		printf("나이 : %d, 이름 : %s \n", people[i].age, people[i].name);
	}
	}

void example2() {
	// 1. 구조체 정의
	struct mark {
		char grade;
		int kor;
		int eng;
		int mat;
		double ave;
	};
	// 2. 구조체 배열 선언
	struct mark midterm[2];
	// 3. 구조체 배열 순회 (점수 입력 받기)
	int i;
	for ( i = 0; i < 2; i++) {
		// 1) 점수 3개는 입력
		printf("%d번째 국어 점수 입력 >> ", i + 1);
		scanf("%d", &midterm[i].kor);
		printf("%d번째 영어 점수 입력 >> ", i + 1);
		scanf("%d", &midterm[i].eng);
		printf("%d번째 수학 점수 입력 >> ", i + 1);
		scanf("%d", &midterm[i].mat);
		// 2) 평균과 학점은 계산
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
	//4. 구조체 배열 순회 (결과 확인)
	for ( i = 0; i < 2; i++) {
		printf("%d번째 점수 안내 \n", i + 1);
		printf("    국어 : %d, 영어 : %d, 수학 : %d\n", midterm[i].kor, midterm[i].eng, midterm[i].mat);
		printf("    평균 : %1.f(학점 : %c)\n", midterm[i].ave, midterm[i].grade);
	}
}

int main() {
	example1();
	example2();
	return 0;
}