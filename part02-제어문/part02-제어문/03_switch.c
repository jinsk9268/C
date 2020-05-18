/*
   switch : 표현식에 의한 분기문 (명령들을 분리해서 정리할때 좋음)

   1. 형식
     switch (표현식) {
	 case 결과값1 : 실행문;
	 case 결과값2 : 실행문;
	 ....
	 default: 실행문; // 지금까지 나타난거 이외의 전부
	 }
   
   2. 주의사항
      1) 표현식의 결과값은 정수 타입만 가능하다.(실수타입 사용 불가, int , char 만 사용 가능)
	  2) case 오른쪽에는 크기 비교(조건식) 불가능하다.
	  3) 각 case는 break 문이 나타나기 전에는 계속 실행된다.

*/

#include <stdio.h>

void main() {

	int n;

	printf("정수 입력 >> ");
	scanf_s("%d", &n);

	switch ( n ) {
	case 1: printf("1이다\n");// 입력된 숫자가 1인경우 브레이크 없으면 1입력하면 밑에거까지 다뜸 , 2이면 2,3 모르겠다
		    break; // 같은조건의 실행문이면 브레이크 마지막 조건문에 넣어줘도 됨
	case 2: printf("2이다\n");
		    break;
	case 3: printf("3이다\n");
		    break;
	default: printf("모르겠다\n"); // break; 들어갈필요 없음 1,2,3 외 나머지 다 포함하기 때문에 
	}


}
