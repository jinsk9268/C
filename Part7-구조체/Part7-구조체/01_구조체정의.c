/*
	구조체 (struct)

	1. 서로 다른 자료형(타입)을 가지는 여러 개의 변수를 하나의 자료형으로 묶어서 사용하는 것이다.
	2. 구조체를 만든 뒤(구조체 정의)에 사용(구조체 선언)한다.
	3. 구조체 정의 방법
		struct 구조체명 {
			// 멤버 변수(필드)의 선언;
		};
	4. 구조체 선언 방법
		struct 구조체명 구조체변수명;
*/

#include <stdio.h>
#include <string.h>


void example1() {
	//1. 구조체 정의 (만든다)
	struct person {
		char gender; // 성별 (M, F)
		int age; // 나이
		double height; // 키
		char name[20]; // 이름
	};
	//2. 구조체 선언 (man, woman 을 사용한다.)
	struct person man;
	struct person woman;
	//3. 구조체 변수 man, woman 에 데이터 저장하기, 초기화는 아님
	man.gender = 'M'; // '.' ~의
	man.age = 20;
	man.height = 180.5;
	//man.name = "will bliss" // man.name 은 배열의 주소이기 때문에 주소를 변경하려는 시도이다. 불가능하다.
	strcpy(man.name, "will bliss"); 
	woman.gender = 'F';
	woman.age = 30;
	woman.height = 161.5;
	strcpy(woman.name, "samanda");
	//4. 확인
	printf("성별: %c, 나이: %d, 키: %.1f, 이름: %s \n", man.gender, man.age, man.height, man.name);
	printf("성별: %c, 나이: %d, 키: %.1f, 이름: %s \n", woman.gender, woman.age, woman.height, woman.name);

}

void example2() {
	// 1. 구조체 정의
	struct car{
		int year;
		int price;
		char model[20];
	};
	// 2. 구조체 변수의 선언 그리고 초기화
	struct car myCar = {2020, 3000, "소나타"};
	// 3. 확인
	printf("연식 : %d, 가격 : %d, 모델 : %s\n", myCar.year, myCar.price, myCar.model);

}

void example3() {
	//1. 구조체 정의
	struct book {
		char rental; // Y, N
		int pages;
		char title[50];
	};
	//2. 구조체 변수의 선언
	struct book myBook;
	//3. 구조체 변수에 데이터 입력 받기
	printf("렌탈 유무(Y/N) >> ");
	scanf("%c", &myBook.rental);
	printf("페이지 수 >> ");
	scanf("%d", &myBook.pages); // scanf 함수는 \n을 입력 버퍼에남겨둔다
	getchar();
	printf("제목 >> ");
	//gets(myBook.title);
	fgets(myBook.title, sizeof(myBook.title), stdin);
	// 4. 확인
	printf("렌탈유무 : %c, 페이지 수 : %d, 제목 : %s \n", myBook.rental, myBook.pages, myBook.title);
}

int main() {
	example1();
	example2();
	example3();
	return 0;
}