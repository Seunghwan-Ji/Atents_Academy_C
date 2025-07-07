#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	// char** argv �� �ǹ�
	// "���ڿ��� �迭"�� ����Ű�� ������
	// �� ��Ҵ� char* (��, �ϳ��� ���ڿ�)
	// ���� char** argv�� char*���� ���� �迭�� ���� �ּҸ� ����Ŵ

	// ���� 1. ����� ���ڷ� �̸��� �����ϰ� ������ �ϸ�
	// xxx�� �ȳ��ϼ���. �� ����ϴ� ���α׷��� ���弼��.
	
	if (argc == 2)
	{
		printf("%s�� �ȳ��ϼ���.", argv[1]);
	}

	// ���� 2. ����� ���ڷ� 12 + 13 �̷������� �Է��ϸ�
	// ����� ������� ������ִ� ���α׷��� ���弼��. (��Ģ������ �����ϰ� ���弼��.)

	int iLeft = atoi(argv[1]);
	int iRight = atoi(argv[3]);

	// char���� �������̱� ������ ����ġ ���̽��� �ۼ� ����.
	switch (*argv[2])
	{
	case '+':
		printf("%d + %d = %d\n", iLeft, iRight, iLeft + iRight);
		break;

	case '-':
		printf("%d - %d = %d\n", iLeft, iRight, iLeft - iRight);
		break;

	case 'x':
		printf("%d * %d = %d\n", iLeft, iRight, iLeft * iRight);
		break;

	case '/':
		printf("%d / %d = %f\n", iLeft, iRight, iLeft / (float)iRight);
		break;
	}


	return 0;
}