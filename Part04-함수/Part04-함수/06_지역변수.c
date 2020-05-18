 /*
	지역변수(local variable)

	1. 선언된 지역 ({})에서만 사용된다.
	2. 선언된 지역을 벗어나면 메모리에서 소멸된다.
	3. 반드시 초기화를 해야 사용할 수 있다. (기본 상태 : 쓰레기 저장 상태)
		예) int total = 0;
	4. 메모리의 "스택" 영역에 저장되는 변수이다. 
 */

#include <stdio.h>

void plusOne(int n) { // num과 n은 다르다 서로간에 모르는 변수 // 매개변수(파라미터를 저장하는 변수)도 지역변수이다. 
	n++;
}

int main() {
	int num = 10; // main에서만 사용 가능한 지역변수
	plusOne(num);
	printf("num=%d\n", num);
	return 0;
}