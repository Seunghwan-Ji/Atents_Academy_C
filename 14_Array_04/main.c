#include <stdio.h>

int main() {
	// 문제 1. 이차원 배열을 만들고 구구단(2단 ~ 9단)의 값을 저장하고
	// 값을 저장한 배열의 값을 출력해보세요(2 ~ 9단까지 출력)

	int iGugudanArr[8][9];

	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			iGugudanArr[i - 2][j - 1] = i * j;
		}
	}

	for (int i = 0; i < 8; i++)
	{
		printf("====================\n");
		for (int j = 0; j < 9; j++)
		{
			printf("%d x %d = %d\n", i + 2, j + 1, iGugudanArr[i][j]);
		}
	}

	// 문제 2. 단수를 입력받고
	// 배열에 저장된 값에서 해당 단수를 출력하시오

	int iDan = 2;

	printf("\n\n");
	printf("단 수 입력: ");
	scanf_s("%d", &iDan);
	printf("\n");

	for (int j = 0; j < 9; j++)
	{
		printf("%d x %d = %d\n", iDan, j + 1, iGugudanArr[iDan - 2][j]);
	}

	return 0;
}