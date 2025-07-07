#include <stdio.h>

int main()
{
	int a = 20;
	int b = 30;

	// 조건 연산자
	int ret = a > b ? a : b;

	printf("%d와 %d중에 %d이 더 크다\n", a, b, ret);

	a > b ? printf("a: %d가 b: %d 보다 크다\n", a, b) : printf("b: %d가 a: %d 보다 크거나 같다.", b, a);

	return 0;
}