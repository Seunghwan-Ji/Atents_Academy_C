#include <stdio.h>

// 숙제
// 박스의 좌측 상단 좌표와 우측 하단 좌표를 입력받고
// 입력받은 박스가 (0, 0) ~ (10, 10) 박스와 겹쳤는지 판단하는 로직을
// 만드세요..
// 박스는 정사각형이나 직각사각형이다...

int main()
{
	// 입력 받을 박스 정보.
	int iTopLeftX = 0;
	int iTopLeftY = 0;
	int iBottomRightX = 0;
	int iBottomRightY = 0;

	printf("좌상단 x 좌표 입력: ");
	scanf_s("%d", &iTopLeftX);

	printf("좌상단 y 좌표 입력: ");
	scanf_s("%d", &iTopLeftY);

	printf("우하단 x 좌표 입력: ");
	scanf_s("%d", &iBottomRightX);

	printf("우하단 y 좌표 입력: ");
	scanf_s("%d", &iBottomRightY);

	printf("좌상단: (%d, %d), 우하단: (%d, %d)\n", iTopLeftX, iTopLeftY, iBottomRightX, iBottomRightY);

	// 입력 받은 박스의 너비.
	int iWidth = iBottomRightX - iTopLeftX;

	// 기존 박스와의 너비 합.
	int iSumWidth = 10 + iWidth;

	// 두 박스의 x값 차이.
	int iDeltaX = 0;

	// 차이 계산.
	if (0 <= iTopLeftX)
	{ // 기존 박스보다 왼쪽에 있다고 판단.
		// 기존 박스의 좌상단 x값 0 + 입력 받은 박스의 우하단 x값.
		iDeltaX = iBottomRightX;
	}
	else
	{ // 오른쪽에 있다고 판단.
		// 입력 받은 박스의 좌상단 x값 + 기존 박스의 우하단 x값 10.
		iDeltaX = 10 - iTopLeftX;
	}

	// x 차이 값과 너비 길이 합 크기를 비교하여 겹치는지 판단.
	if (iDeltaX < iSumWidth)
	{
		printf("겹치는 박스.");
	}
	else
	{
		printf("겹치지 않는 박스.");
	}

	return 0;
}