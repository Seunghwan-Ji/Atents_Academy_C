#include <stdio.h>

// ���������
// +, -, *, /, %

int main()
{
	int a = 20;
	int b = 30;
	int c = 0;

	c = a + b; // ���� + ���� = ����
	printf("%d + %d = %d\n", a, b, c);
	
	c = a - b; // ���� - ���� = ����
	printf("%d - %d = %d\n", a, b, c);

	c = a * b; // ���� * ���� = ����
	printf("%d * %d = %d\n", a, b, c);

	c = a / b; // ���� / ���� = ����
	printf("%d / %d = %d\n", a, b, c);

	float cc = 0.0f;
	cc = a / b;
	printf("%d / %d = %f\n", a, b, cc);

	cc = a / (float)b;
	printf("%d / %d = %f\n", a, b, cc);

	return 0;
}