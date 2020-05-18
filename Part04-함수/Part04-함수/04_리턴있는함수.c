/*

리턴이 있는 함수

	1. 실행 결과를 반환하는 함수
	2. 함수 정의를 리턴값의 타입으로 시작한다. (int, double 등)
*/

#include <stdio.h>
#include <math.h> // 수학관련함수를 사용할 수 있다

double getArea(double r) { // 호출할때 전달하는 값이 r에 저장
	return 3.14 * pow(r,2); // getArea로 리턴했던 값을 준다 // pow(r,2) : r의 2제곱
}

int main() { // 메인함수의 실행결과는 0이다
	double radius;
	double area;
	printf("원의 반지름을 입력하세요 >> ");
	scanf_s("%lf", &radius);
	// area = 3.14 * radius * radius;
	area = getArea(radius); // 리턴 처리하는 부분
	printf("반지름이 %g인 원의 크기는 %g입니다.\n", radius, area);

	return 0;
}
