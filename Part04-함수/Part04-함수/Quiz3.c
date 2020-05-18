/*
	문제.bmi 계산하기
		키(cm) , 몸무게(kg)를 입력 받아서 해당하는 bmi를 반환하는 getBMI함수를 구현하시오.
		BMI = 몸무게(kg) / 키(m)의 제곱
		계산된 bmi에 따라 비만정도를 출력하는 obesityInfo 함수를 구현하시오.
		20 이하는 "저체중"
		21~25 "정상체중"
		26~30 "과체중"
		30 초과는 "비만"
*/

#include <stdio.h>
#include <math.h>

double getBMI(double h, double w) {
	double weight = w;
	double height = h / 100;
	return weight / pow(height,2);
}

void obestityInfo(double h, double w){
	double bmi = getBMI(h,w); // double getBMI return값이 여기에 저장
	if (bmi <= 20) {
		printf("저체중\n");
	} else if (bmi <= 25) {
		printf("정상체중\n");
	} else if (bmi <= 30) {
		printf("과체중\n");
	} else {
		printf("비만\n");
	}
}

int main() {
	double height, weight;
	printf("키(cm) >> "); scanf_s("%lf", &height);
	printf("몸무게(kg) >> "); scanf_s("%lf", &weight);
	obestityInfo(height, weight);

	return 0;
}