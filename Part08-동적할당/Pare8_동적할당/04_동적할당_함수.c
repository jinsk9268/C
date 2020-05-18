#include <stdio.h>
#include <stdlib.h>

// inputID 함수
// 1.파라미터 : 없음 (void)
// 2.리턴타입 : 있음 (입력 받은 아이디)
char * inputID(void) {

	// 입력된 id가 저장된 주소를 리턴한 뒤에도
	// 해당 값을 소멸시키지 않고 유지하려면 
	// free 를 만나기 전까지는 계석 데이터를 유지하는 malloc 을 사용해야 한다.

	char * id = (char *)malloc(sizeof(char) * 20);
	
	printf("가입할 아이디 입력 >> ");
	scanf("%s", id);
	return id; // 입력된 아이디의 주소를 리턴하기 때문에 리턴타입은 char * 이다
}

// outputID 함수
// 1. 파라미터 : 있음 (아이디)
// 2. 리턴타입 : 없음 (void)
void outputID(char * id) { // 매개변수 char id[] 도 가능하다.
	printf("입력된 아이디 : %s \n", id);
}

int main() {
	char *id1;
	char *id2;
	id1 = inputID();
	outputID(id1);
	id2 = inputID();
	outputID(id2);

	printf("지금까지 입력된 아이디는 다음과 같습니다.\n");
	outputID(id1);
	outputID(id2);

	free(id1);
	free(id2);

	return 0;
}