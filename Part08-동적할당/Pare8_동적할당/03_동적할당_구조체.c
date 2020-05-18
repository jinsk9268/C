#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char name[20]; // char 1바이트 * 배열 20바이트
	int age; // 4바이트
} Person;

int main() {

	Person *ptr = (Person *)malloc(sizeof(Person));

	printf("이름 입력 >> ");
	gets(ptr->name);
	
	printf("나이 입력 >> ");
	scanf("%d", &ptr->age);

	printf("이름 : %s, 나이 : %d \n", ptr->name, ptr->age);

	free(ptr);

	return 0;
}
