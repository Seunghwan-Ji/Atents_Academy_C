#include <stdio.h>

// ������ �ڵ尡 �ݺ��̵Ǵ� ���
// ������ �ڵ�
// �ڵ���� ��� �ϳ��� ������ ������ִ� ���� ����� �ֽ��ϴ�.
// �Լ�(Function)��� �մϴ�.

// returnType �Լ���(�Ű�����){
//        ��ɾ��;
// }

// returnType(����Ÿ��) : �Լ��� ������� ��ɾ ó���ϰ� ������� � DataType����
//						  ������ �������� �����ϸ�˴ϴ�.
//                        returnType�� ���� ���(�����ϴ� ���� ���ٴ� �ǹ��Դϴ�.) 
//                       returnType�� void�� �����ϸ� �˴ϴ�.

// �Լ���: �Լ��� ȣ���Ҷ� ����ϴ� �̸�.
// �Ű�����(parameter) : �Լ��� ȣ���Ҷ� �����ϴ� ����(argument)���� �޴� ����

int add(int a, int b) {
	int temp = 0;
	temp = a + b;
	return temp; // return���� �Լ� ������ ó������ �Լ� �ܺη� �����ϴ� ��Ȱ�� �մϴ�.
}

void PrintMonster5(void) {
	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");
}

// �Լ� ��� ����
// 1. ���뼺
// 2. ��⼺
// 3. ������




void main() {

	int temp = 0;

	temp = add(20, 30);

	// ....
	PrintMonster5();

	// ....


	PrintMonster5();

	// ....

	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");




	
}