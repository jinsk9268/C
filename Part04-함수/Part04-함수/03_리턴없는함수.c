/*	
	리턴이 없는 함수

	1. 실행 결과를 반환하지 않는 함수
	2. 함수 정의를 void 로 시작
	3. 리턴이 없는 함수인 경우 "return;" 코드를 삽입하면 함수가 강제 종료된다.

*/

	#include <stdio.h>

	//1. 함수명 : coffeeMachine
	//2. 파라미터 : int money
	//3. 리턴값 : 없음(viod)
	void coffeeMachine(int money) { // int money로 전달(parameter)
		int price = 300; // 변수의 선언 , return; 이 들어가면 안되니까 변수선언은 맨 위로
		if ( money <=0 ) {
			printf("%d원은 사용할 수 없습니다\n", money);
			return; // coffeMachine함수를 더 이상 진행하지 않는다.
		}
		int price = 300; // 변수의 선언
		printf("뽑을 수 있는 커피는 %d잔 입니다.\n", money/price); // 이 안에서 끝나니까, 호출한 영역에 영향을 주지 않으니까

	}

	int main() {

		int coin;
		printf("얼마있니? >> ");
		scanf_s("%d", &coin);

		coffeeMachine(coin); //1000을 coffeeMachine함수에 전달하며 호출 동작하려면 돈이 필요하니까 , 호출할때 적어준 값이 파라미터에 저장, 동일할 필요는 없음 

		return 0;
	}