#include <stdio.h>

int main() {
	char oper = 0;

	printf("���� ����� �Է��ϼ���(+, -, x, /):");
	scanf_s("%c", &oper);


	switch (oper) {
	case '+':
	{
		// case���ȿ��� ������ ����� ����Ҷ�
		// {} (�߰�ȣ ��)�� �� �Ŀ� ������ �����ؾ� �մϴ�.
		int a = 20;
		int b = 30;

		printf("%d + %d = %d\n", a, b, a + b);
	}

	break;

	case '-':
	{
		int a = 20;
		int b = 30;

		printf("%d + %d = %d\n", a, b, a - b);
	}
	break;

	case 'x':
	case 'X':
	{
		int a = 20;
		int b = 30;

		printf("%d + %d = %d\n", a, b, a * b);
	}

	break;

	case '/':
	{
		int a = 20;
		int b = 30;

		printf("%d + %d = %f\n", a, b, a / (float)b);
	}
	break;

	default:
		printf("�����ȣ�� �߸� �Է��ϼ̽��ϴ�.");
		break;
	}


	return 0;
}