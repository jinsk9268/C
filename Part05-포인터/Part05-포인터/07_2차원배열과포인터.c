/*
	1. 2차원배열의 포인터형

	int list[3][2];
	int (*ptr)[2]; // 2열짜리 2차원 배열만 저장할 수 있는 포인터변수
	ptr = list; // 배열의 이름은 배열의 주소이다. (list == &list[0][0]
	list[i][j] == ptr[i][j]

	2. 2차원배열의 파라미터(전달) 처리
		1) 배열이름(주소)을 전달하고,
		2) 배열의 행 수를 전달한다.
			행 수 = 배열전체크기 / 한 행의 크기
			        sizeof(list) / sizeof(list[0]) 주로 사용 // 이차원배열에서 인덱스 1개를 놓으면 행을 의미한다
					sizeof(list) / sizeof(list[1])
					sizeof(list) / sizeof(list[2]) 모두 가능
	
*/
#include <stdio.h>

void example1() {
	int list [3][2] = {1, 2, 3, 4, 5, 6};
	int (*ptr)[2] = list; // 2차원 배열 중에서 열이 2개인 2차원 배열만 저장할 수 있는 포인터변수이다.
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d\t", ptr[i][j]); //list[i][j] 가능
		}
		printf("\n");
	}
}

void example2(int (*ptr)[2], int row) { // [row][2] 자동적으로 따라오기 때문에 // 배열의 주소 , 행 // 열 앞에 적어줌 안적어주면 성립이안되기때문
	int i, j;

	for (i = 0; i < row; i++) { // 행 : row
		for (j = 0; j < 2; j++) { // 열 : column
			printf("%d\t", ptr[i][j]); 
		}
		printf("\n");
	}
}

int main() {
	int list[3][2] = {10, 20, 30, 40, 50, 60};
	example2(list, sizeof(list) / sizeof(list[0])); // sizeof(list) / sizeof(list[0]) 행 구하는거 열은 자동적으로 따라온다
	example1();
	return 0;
}