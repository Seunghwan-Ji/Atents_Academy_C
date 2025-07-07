#include <stdio.h>

int main()
{
	// 관계연산자의 연산의 결과값의 DataType? 논리타입
	// 논리연산자의 피연산자의 DataType? 논리타입

	int xValue = 0;

	printf("임의의 정수값을 입력하세요: ");
	scanf_s("%d", &xValue);

	int ret = (0 < xValue) && (xValue < 10);

	if (ret == 1)
	{
		printf("xvalue: %d는 0과 10사이에 있다.", xValue);
	}
	else
	{
		printf("xvalue: %d는 0과 10사이에 없다.", xValue);
	}

	return 0;
}