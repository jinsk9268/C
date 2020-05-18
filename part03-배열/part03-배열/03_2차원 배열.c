/*
	2차원 배열

	1. 표 형태, 행과 열로 구성된 평면 형태(2차원)의 배열이다.
	2. 행 인덱스와 열 인덱스로 구성한다.
	3. 형식
		int arr[3][2]; // 3행 2열 복근이미지...

		arr[0][0] arr[0][1]
		arr[1][0] arr[1][1]
		arr[2][0] arr[2][1]
		
		1) 배열 이름 : arr
		2) 행 인덱스 : 0 ~ 2
		3) 열 인덱스 : 0 ~ 1
*/

#include <stdio.h>

void example1() {
	int arr[3][2];
	int i, j; // i(행 인덱스), j(열 인덱스)
	arr[0][0] = 10;
	arr[0][1] = 20;
	arr[1][0] = 30;
	arr[1][1] = 40;
	arr[2][0] = 50;
	arr[2][1] = 60;
	//2차원 형태로 출력, 중첩루프 필요 i고정 j변화 / 바깥족 i의 for문 안쪽 j의 for문

	for ( i = 0; i < 3; i++ ) { // 행은 변수처리 가능
		for ( j = 0; j < 2; j++ ) { // 열은 변수처리 못함
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
}

void example2() {
	int arr1[3][2] = {
		{10, 20},
		{30, 40},
		{50, 60}
	};
	int arr2[3][2] = {1, 2, 3, 4, 5, 6}; // int arr2[][2] = {1, 2, 3, 4, 5, 6}; 행 생략 가능
	//int arr3[3][] = {1, 2, 3, 4, 5, 6}; // 빈자리 0으로 채우니까 모양이 무수하게 많아져서 // 열은 반드시 명시해야 한다.
	int i, j;
	for ( i = 0; i < 3; i++) {
		for ( j = 0; j < 2; j++) {
			printf("%-4d", arr1[i][j]);
		}
		printf("\n");
	}
	for ( i = 0; i < 3; i++) {
		for ( j = 0; j < 2; j++) {
			printf("%4d", arr2[i][j]);
		}
		printf("\n");
	}
}

int main() {
	//example1();
	example2();
	return 0;
}
