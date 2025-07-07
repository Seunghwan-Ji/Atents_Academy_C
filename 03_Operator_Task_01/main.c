#include <stdio.h>

// 숙제
// 점(x, y)가 사각형 박스((0, 0) ~ (10, 10)) 사이에 있는지 없는지를
// 판단하는 로직을 만들고 실행해보세요.

int main()
{
	int xValue = 0;
	int yValue = 0;

	printf("x 좌표 입력: ");
	scanf_s("%d", &xValue);

	printf("y 좌표 입력: ");
	scanf_s("%d", &yValue);

	if ((0 < xValue && 0 < yValue) && (10 > xValue && 10 > yValue))
	{
		printf("사각형 내부에 있는 점입니다.");
	}
	else
	{
		printf("사각형 외부에 있는 점입니다.");
	}
}