#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int inputValue = 0;

	printf("1 ~ 10 ������ ��ȣ�� �Է��ϼ���: ");
	scanf_s("%d", &inputValue);

	switch (inputValue) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 9:
		printf("�Է��Ͻ� ���ڴ� Ȧ�� �Դϴ�.\n");
		break;

	case 2:
	case 4:
	case 6:
	case 8:
	case 10:
		printf("�Է��Ͻ� ���ڴ� ¦���Դϴ�.\n");
		break;

	default:
		printf("�߸��� ��ȣ�Դϴ�.\n");
		break;
	}

	// ������ 2���� ������(+, -, x, /)�� �Է¹ް�
	// �Էµ� ���� ������� �Է¹��� ������ 2���� ����Ͽ� 
	// ������� ����ϴ� ���⸦ ���弼��..

	char oper = 0;
	int left = 0;
	int right = 0;


	printf("�����ȣ�� �Է��ϼ���: ");
	scanf_s("%*c%c", &oper);

	printf("������ �ΰ� �Է�������:");
	scanf_s("%d %d", &num1, &num2);

	return 0;
}