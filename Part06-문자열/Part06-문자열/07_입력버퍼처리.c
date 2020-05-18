/*
	입력 버퍼
	: 입력된 데이터가 잠시 보관되는 임시 기억장소로 속도 향상을 위해 사용된다.
*/

#include <stdio.h>

int main() {
	char birthday[7];
	char name[100];

	printf("생일6자리 입력 >> ");
	scanf("%s", birthday); // 1.문자열 6자리를 birthday에 저장시킨다. + '\n' 입력 버퍼에 남겨 놓는다
	
	// 3. 결론) 입력 버퍼에 저장된 '\n'을 제거할 필요가 있다.
	getchar(); // gatchar() :  입력 버퍼에 저장된 문자를 하나만 읽는 함수


	printf("이름 입력 >> ");
	gets(name); //fgets(name, sizeof(name), stdin); // 2. scanf가 남겨놓은 '\n'을 입력으로 처리한다

	printf("생년월일 6자리 : %s \n", birthday);
	printf("이름 : %s \n", name);

	return 0;
}