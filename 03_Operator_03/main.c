#include <stdio.h>

int main()
{
	int a = 20;

	a = -a; // ��ȣ������

	printf("a = %d\n", a);

	// ���迬����
	// <, >, <=, <==, ==, !=

	a = 20;
	int b = 30;

	int ret = a < b; // ���迬������ ���� ������� DataType? ��Ÿ��(true/false)
				     // C������ �� Ÿ���� ����.
					 // C������ ���� Ÿ������ ������ ó���Ѵ�.
	                 // 0�� ����, 0�̿��� ���� ���̴�.

	printf("%d < %d = %d\n", a, b, ret);

	ret = a > b;
	printf("%d > %d = %d\n", a, b, ret);

	ret = a <= b;
	printf("%d <= %d = %d\n", a, b, ret);

	ret = a >= b;
	printf("%d >= %d = %d\n", a, b, ret);

	ret = a == b;
	printf("%d == %d = %d\n", a, b, ret);

	ret = a != b;
	printf("%d != %d = %d\n", a, b, ret);
}