#include <stdio.h>

// 구조체 정의
typedef struct { //user 없어도됨
	char id[30];
	char pw[30];
} User;

// signUp 함수 (User 정보 입력 받아서 리턴)
// 1. 파라미터 : 없음 (void)
// 2. 리턴타입 : 있음 (user)
User signUp(void) {
	User u;
	printf("사용할 아이디 입력 >> ");
	scanf("%s", u.id); // id는 배열이므로 그 자체로 주소값이다 (&id 라고 하면 안된다)
	printf("사용할 비밀 번호 입력 >. ");
	scanf("%s", u.pw);
	return u; // user = signUp에 전달
}

// confirm 함수 (User 정보를 파라미트로 전달 받아서 출력)
// 1. 파라미터 : 있음 (User), 매개변수에 저장된다.
// 2. 리턴타입 : 없다 (void), 함수 호출 이외에 다른 코드가 없으면 리턴없음
void confirm(User user) { // 전달된 변수를 받아서 변수를 저장할 수 있게 선언, 매개변수
	printf("가입된 아이디 : %s \n", user.id);
	printf("가입된 비밀전호 : %s \n", user.pw);
}

int main() {
	User user;
	user = signUp(); // 입력받아주는 함수, 괄호안에 파라미터 있는지 먼저 확인
	confirm(user); // 유저정보를 입력하면 다시 확인해달라, 함수 호출 영역을 봤을때 함수 호출 이외 코드가 전혀 없으면 언제나 리턴타입이 void 이다.
	return 0;
}