#include <stdio.h>

void example1() {
	typedef int Data; // int 타입 -> Data 타입
	typedef int* Pointer; // int* 타입 -> Pointer 타입
	Data num = 100; // int num = 100;
	Pointer ptr = &num; // int* ptr = &num;
	printf("%d \n", num);
	printf("%d \n", *ptr);
}

void example2() {
	//1.구조체 정의
	struct person {
		int age;
		char name[20];
	};
	//2.구조체 타입의 정의
	typedef struct person Person;
	//3.새로운 구조체 타입으로 변수 선언
	//struct person human;
	Person human = {20, "alice"};
	//4.확인
	printf("나이 : %d, 이름 : %s \n", human.age, human.name);

}

void example3() {
	//1. 구조체 정의 + 구조체 타입 정의 (추천)
	typedef struct person { // person 안적을 수도 있음 // _person 생략가능
		int age;
		char name[20];
	} Person;
	//2. 새로운 구조체 타입으로 변수 선언
	Person human = {20, "alice"};
	//3.확인
	printf("나이 : %d, 이름 : %s \n", human.age, human.name);

}

int main() {
	example1();
	example2();
	example3();
	return 0;
}