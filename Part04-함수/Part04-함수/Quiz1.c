/* 
	문제. 나이를 입력받아서 전달하면 
	      나이에따른 출력을 선택하는 ageFunction 함수를 구현하시오.
		  7 이하 : 미취학아동
		  13 이하 : 초등학생
		  16 이하 : 중학생
		  19 이하 : 고등학생
		  나머지 : 성인
*/


#include <stdio.h>

void ageFunction(int age) { // main의 age와 ageFunction은 다르다
	if (age <= 0 || age >= 130) {
		printf("%d살은 존재하지 않는 나이입니다.\n", age);
		return;
	}
	if (age <= 7) { // age >= 1 && 선생님이 추가
		printf ("미취학아동\n");
	} else if (age <= 13) { // 나는 7< age <=13 이렇게 했는데 위에 조건이 아니면 이니까 7< 안적어 줘도 됨 적어주면 오류남
		printf ("초등학생\n");
	} else if (age <= 16) {
		printf ("중학생\n");
	} else if (age <= 19) {
		printf ("고등학생\n");
	} else { 
		printf ("성인\n");
	}
}

int main() {
	int age;
	printf("몇살이니? >>");
	scanf_s("%d", &age);
	ageFunction(age);
	return 0;
}