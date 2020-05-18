/*
	1차원배열 (Array)

	1. 같은 타입의 데이터를 여러개 저장할 수 있는 구조이다.
	2. 연속된 메모리 공간을 사용한다.
	3. 배열의 길이가 정해지면 길이 수정이 불편하다.
	4. 선언 방법
		int arr[3]; // 길이가 3인 int 형 arr 배열 선언 (int를 3개 저장)
				    // int a, b, c; 와 같은 역할 수행
					// 변수의 이름을 통일해서 사용할 수 있다
		1) 배열 이름 : arr
		2) 배열 길이 : 3
		3) 배열 인덱스(번호) : 0, 1, 2 (0 ~ 길이-1)
*/

#include <stdio.h>

// 함수의 "정의" : 함수를 만든다.
void example1() {
	int arr[3]; // 쓰레기 상태, c에서는 길이만 잡아주고 값을 주지않아서, 값을 주지 않으면 사용할 수 없음
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
}

void example2() {
	int arr1[3] = {10, 20, 30}; // 초기화 방법
	int arr2[] = {40, 50, 60}; // 초기화를 하는 경우에만 길이 생략이 가능하다.
	int arr3[3] = {70}; // {70, 0, 0} 과 같은 형태로 초기화를 진행한다.
	printf("%d %d %d\n", arr1[0], arr1[1], arr1[2]);
	printf("%d %d %d\n", arr2[0], arr2[1], arr2[2]);
	printf("%d %d %d\n", arr3[0], arr3[1], arr3[2]);
}

void example3() {
	int arr[3] = {10, 20, 30};
	int i; // 배열인덱스 (0 ~ 2)
	for ( i = 0; i < 3; i++) {
		printf("%4d", arr[i]); // %4d : 4자리 폭으로 출력한다. 스페이스 없어도 숫자 구분 가능 --10 --20
	}
	printf("\n");
}

void example4() {
	/*
		int arr[3];
		sizeof(arr) : 배열의 전체 크기 (int가 3개 있다.) -> 12 (바이트)
		sizeof(int) : int 타입의 크기 -> 4 (바이트)
		sizeof(arr) / sizeof(int) : 배열의 길이 공식 -> 3 (개)
		c언어는 안정해져있어서 시스템을 통해서 알아내야되기 때문이다
	*/
	int arr[3] = {10, 20, 30};
	int i;
	int length; // 배열의 길이(3)
	for ( i = 0, length = sizeof(arr) / sizeof(int); i < length; i++){  // 0에서 시작하기때문에 길이보다 작아야함, 자바는 i < arr.length()
		printf("%-4d", arr[i]); // 앞에 출력 10-- 20--
	}
	printf("\n");
}

void example5() {
	int arr[3];
	int i;
	int length;
	length = sizeof(arr) / sizeof(int);
	// 1. 입력
	for ( i = 0; i < length; i++) {
		printf("%d번째 입력 >> ", i + 1);
		scanf_s("%d", &arr[i]); // 배열요소 : 배열을 구성하는 한 변수
	}
	// 2. 출력
	for (i = 0; i < length; i++) {
		printf("%d \n", arr[i]);
	}
}


int main() {
	//example1(); // 함수의 "호출" : 함수를 사용한다.
	//example2();
	//example3();
	//example4();
	example5();
	return 0;
}