#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char name[20]; // char 1����Ʈ * �迭 20����Ʈ
	int age; // 4����Ʈ
} Person;

int main() {

	Person *ptr = (Person *)malloc(sizeof(Person));

	printf("�̸� �Է� >> ");
	gets(ptr->name);
	
	printf("���� �Է� >> ");
	scanf("%d", &ptr->age);

	printf("�̸� : %s, ���� : %d \n", ptr->name, ptr->age);

	free(ptr);

	return 0;
}
