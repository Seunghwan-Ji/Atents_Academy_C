#include <stdio.h>

// 자동변수의 주소값을 함수의 외부로 전달해서 사용하시면 안됩니다.
// 전달받은 주소값으로 메모리공간에 접근할 수는 있지만
// 메모리공간의 값이 유지된다고 보장할 수 없습니다.(다른 함수가 사용)

int* SetScore(int value)
{
	int sum = 0; // 로컬변수, 자동변수

	sum += value;

	return &sum; // 자동변수의 주소값을 리턴함.
}

// 정적변수의 주소값을 함수외부로 전달해서 사용하는 것은 유효합니다.
// 정적변수의 메모리공간은 프로그램 생명주기 내내 다른 함수가 사용하지 않고
// 유지 됩니다.

int* PSetScore(int value)
{
	static int sum = 0; // 로컬변수, 정적변수

	sum += value;

	return &sum; // 자동변수의 주소값을 리턴함.
}

int main()
{
	printf("\nSetScore\n");
	int* pa = SetScore(100);

	printf("*pa = %d\n", *pa);
	printf("*pa = %d\n", *pa);
	printf("*pa = %d\n", *pa);

	printf("\nPSetScore\n");
	pa = PSetScore(100);
	printf("*pa = %d\n", *pa);
	printf("*pa = %d\n", *pa);
	printf("*pa = %d\n", *pa);

	return 0;
}