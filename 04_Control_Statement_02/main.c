#include <stdio.h>

int main()
{
	unsigned char ch = 'A';

	printf("문자하나를 입력하세요: ");
	scanf_s("%c", &ch);

	if (ch == 'A') // 이중 조건문
	{
		printf("ch 변수의 값은 A문자입니다.\n");
	}
	else
	{
		printf("ch 변수의 값은 A문자가 아닙니다.\n");
	}

	// if문에 붙어있는 명령어가 한줄인 경우에는 {}(중괄호 블럭)을
	// 생략할 수 있습니다.

	if (ch == 'B')
		printf("ch 변수의 값이 B 문자입니다.\n");
	else
		printf("ch 변수의 값이 B 문자가 아닙니다.\n");

	int a = 20;
	int b = 30;

	if (a < b)
	{
		printf("a: &d가 b: %d 보다 작다.\n", a, b);
	}
	else
	{
		printf("a: &d가 b: %d 크거나 같다.\n", a, b);
	}

	if (b - 30) // 정수식을 사용
	{
		if (b < 30)
		{
			printf("b는 30보다 작다.\n");
		}
		else
		{
			printf("b는 30보다 크다.\n");
		}
	}
	else
	{
		printf("b는 30입니다.\n");
	}

	return 0;
}