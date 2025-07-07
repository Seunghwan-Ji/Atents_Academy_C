#include <stdio.h>

int main()
{
	int a = 20;

	a = -a; // 부호연산자

	printf("a = %d\n", a);

	// 관계연산자
	// <, >, <=, <==, ==, !=

	a = 20;
	int b = 30;

	int ret = a < b; // 관계연산자의 연산 결과값이 DataType? 논리타입(true/false)
				     // C언어에서는 논리 타입이 없다.
					 // C언어에서는 정수 타입으로 논리값을 처리한다.
	                 // 0은 거짓, 0이외의 값은 참이다.

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