#include <stdio.h>

void example1() {
	//1. 구조체 정의
	struct person {
		char gender; // M, F
		int age;
		double height;
		char name[20];
	};
	//2. 구조체 변수 human의 선언
	struct person human = {'F', 20, 170.5, "alice"};
	//3. 구조체 포인터 변수 ptr의 선언
	struct person *ptr;
	//4. 포인터 변수 ptr 에 human의 주소값 저장
	ptr = &human;
	//5. 포인터 변수 ptr 을 이용한 human의 멤버(필드) 접근
	//포인터를 이용하는 경우 : .(마침표) 대신 ->(화살표) 를 사용한다.
	printf("성별 : %c \n", ptr->gender);
	printf("나이 : %d \n", ptr->age);
	printf("키 : %.1f \n", ptr->height);
	printf("이름 : %s \n", ptr->name);

}

void example2() {
	//1.구조체 정의
	struct wallet {
		int money;
		char card[20];
	};
	struct person {
		char name[20];
		struct wallet *w; // 구조체 포인터 변수 : w
	};
	//2.구조체 변수 선언
	struct wallet w = {50000, "woori card"};
	struct person p = {"alice", &w};
	//3.확인
	printf("성명 : %s \n", p.name);
	printf("현금 : %d \n", p.w->money);
	printf("카드 : %s \n", p.w->card);

}

int main() {
	example1();
	example2();
	return 0;
}