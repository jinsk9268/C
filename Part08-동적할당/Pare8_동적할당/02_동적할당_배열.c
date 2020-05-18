#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int * list; // 배열이 될 예정
	int length; // 배열의 길이
	int i; // 배열의 인덱스

	printf("지금부터 사용자가 원하는 크기의 배열을 만듭니다.\n");

	printf("원하는 배열의 크기를 입력하게요 >> ");
	scanf("%d", &length);

	list = (int *)malloc(sizeof(int) * length);

	for ( i = 0; i < length; i++) {
		printf("입력 >> ");
		scanf("%d", &list[i]);
	}

	for ( i = 0; i < length; i++) {
		printf("입력된 %d번째 정수 : %d \n", i + 1, list[i]);
	}

	free(list); // 메모리 누수 방지를 위해서 시스템에 메모리 공간 반납 (c에서 꼭 하기 개발자, 자바에서는 스스로함)

	return 0;
}
