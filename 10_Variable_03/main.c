#include <stdio.h>

// C언어에서 변수의 종류
// 접근범위: 지역변수, 전역변수
// 존속기간: 자동변수, 외부변수, 정적변수

// 자동변수 작동

void func3(int a)
{
	int temp = 100;
}

void func2(int a)
{
	int temp = 20;
	func3(a);
	int temp2 = 30;
}

void func(int a)
{
	int temp = 100;
	func2(a);
	int temp2 = 200;
}

int main()
{
	int a = 1000;

	func(a);
	int b = 2000;
	return 0;
}