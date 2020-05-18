#include <stdio.h>

// ����ü ����
typedef struct { //user �����
	char id[30];
	char pw[30];
} User;

// signUp �Լ� (User ���� �Է� �޾Ƽ� ����)
// 1. �Ķ���� : ���� (void)
// 2. ����Ÿ�� : ���� (user)
User signUp(void) {
	User u;
	printf("����� ���̵� �Է� >> ");
	scanf("%s", u.id); // id�� �迭�̹Ƿ� �� ��ü�� �ּҰ��̴� (&id ��� �ϸ� �ȵȴ�)
	printf("����� ��� ��ȣ �Է� >. ");
	scanf("%s", u.pw);
	return u; // user = signUp�� ����
}

// confirm �Լ� (User ������ �Ķ��Ʈ�� ���� �޾Ƽ� ���)
// 1. �Ķ���� : ���� (User), �Ű������� ����ȴ�.
// 2. ����Ÿ�� : ���� (void), �Լ� ȣ�� �̿ܿ� �ٸ� �ڵ尡 ������ ���Ͼ���
void confirm(User user) { // ���޵� ������ �޾Ƽ� ������ ������ �� �ְ� ����, �Ű�����
	printf("���Ե� ���̵� : %s \n", user.id);
	printf("���Ե� �����ȣ : %s \n", user.pw);
}

int main() {
	User user;
	user = signUp(); // �Է¹޾��ִ� �Լ�, ��ȣ�ȿ� �Ķ���� �ִ��� ���� Ȯ��
	confirm(user); // ���������� �Է��ϸ� �ٽ� Ȯ���ش޶�, �Լ� ȣ�� ������ ������ �Լ� ȣ�� �̿� �ڵ尡 ���� ������ ������ ����Ÿ���� void �̴�.
	return 0;
}