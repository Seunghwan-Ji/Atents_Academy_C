#include <stdio.h>

int main()
{
	int a = 20;
	int b = 30;

	// ���� ������
	int ret = a > b ? a : b;

	printf("%d�� %d�߿� %d�� �� ũ��\n", a, b, ret);

	a > b ? printf("a: %d�� b: %d ���� ũ��\n", a, b) : printf("b: %d�� a: %d ���� ũ�ų� ����.", b, a);

	return 0;
}