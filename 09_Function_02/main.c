#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int sum(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

float div(int a, int b)
{
	return a / (float)b;
}

int main()
{
	int a = 20;
	int b = 30;

	int ret = 0;

	ret = add(a, b);
	printf("%d + %d = %d\n", a, b, ret);

	ret = sum(a, b);
	printf("%d - %d = %d\n", a, b, ret);

	ret = mul(a, b);
	printf("%d * %d = %d\n", a, b, ret);
	
	float fret = 0.0f;
	ret = div(a, b);
	printf("%d / %d = %d\n", a, b, ret);

	return 0;
}