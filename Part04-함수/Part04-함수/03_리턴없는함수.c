/*	
	������ ���� �Լ�

	1. ���� ����� ��ȯ���� �ʴ� �Լ�
	2. �Լ� ���Ǹ� void �� ����
	3. ������ ���� �Լ��� ��� "return;" �ڵ带 �����ϸ� �Լ��� ���� ����ȴ�.

*/

	#include <stdio.h>

	//1. �Լ��� : coffeeMachine
	//2. �Ķ���� : int money
	//3. ���ϰ� : ����(viod)
	void coffeeMachine(int money) { // int money�� ����(parameter)
		int price = 300; // ������ ���� , return; �� ���� �ȵǴϱ� ���������� �� ����
		if ( money <=0 ) {
			printf("%d���� ����� �� �����ϴ�\n", money);
			return; // coffeMachine�Լ��� �� �̻� �������� �ʴ´�.
		}
		int price = 300; // ������ ����
		printf("���� �� �ִ� Ŀ�Ǵ� %d�� �Դϴ�.\n", money/price); // �� �ȿ��� �����ϱ�, ȣ���� ������ ������ ���� �����ϱ�

	}

	int main() {

		int coin;
		printf("���ִ�? >> ");
		scanf_s("%d", &coin);

		coffeeMachine(coin); //1000�� coffeeMachine�Լ��� �����ϸ� ȣ�� �����Ϸ��� ���� �ʿ��ϴϱ� , ȣ���Ҷ� ������ ���� �Ķ���Ϳ� ����, ������ �ʿ�� ���� 

		return 0;
	}