#include <stdio.h>
// 2차원 배열 인자 전달하기

// 포인터식
void SaveNumber(int row, int(*parray)[10])
{
	int iNum = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			*(*(parray + i) + j) = iNum;
			++iNum;
		}
	}
}

// 배열식
void Set2DimensionArray(int parray[][10], int column) {
	for (int i = 0; i < column; i++) {
		for (int j = 0; j < 10; j++) {
			parray[i][j] = i * 10 + j;
		}
	}
}

void PrintArray(int row, int(*parray)[10])
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d ", *(*(parray + i) + j));
		}
	}
}

int main() {
	int array[10][10];


	// 문제
	// 이차원 배열 array에 정수값(0 ~ 99)을 저장하는 함수를 만들고 array배열을 값을 저장하고
	// array에 있는 값을 출력하는 함수를 만들고 출력하시오.

	SaveNumber(10, array);
	PrintArray(10, array);

	return 0;
}