#include <stdio.h>

void example1() {
	char *name = "앨리스";
	char *phone = "010-1234-5678";
	char *address;
	address = "서울시 마포구 서교동";
	printf("내 이름은 %s입니다.\n", name);
	printf("내 연락처는 %s입니다.\n", phone);
	printf("내가 사는 곳은 %s입니다.\n", address);
}

void example2() {
	// char *names[3] : 주소를 3개 저장하는 배열이므로 문자열도 3개를 연결할 수 있다
	char *names[3] = {"alice", "james", "david"};
	printf("첫 번째 친구는 %s입니다.\n", names[0]);
	printf("두 번째 친구는 %s입니다.\n", names[1]);
	printf("세 번째 친구는 %s입니다.\n", names[2]);
}

void example3() {
	char *names[3] = {"james", "david", "john"};
	int i;
	for (i=0; i < 3; i++) {
		printf("%d번째 친구는 %s입니다.\n", i + 1, names[i]);
	}
}

void example4() {
	char *subject[3] = {"국어","영어", "수학"};
	int scores[3];
	int i;
	for (i = 0; i < 3; i++) {
		printf("%s 과목 점수 >> ", subject[i]);
		scanf_s("%d", &scores[i]);
	}
}

int main() {
	example1();
	example2();
	example3();
	example4();
	return 0;
}