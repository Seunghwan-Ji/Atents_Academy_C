#include <stdio.h>
#include <stdlib.h>
// 동적 이차원 배열

int main() {
	// 구구단 중에 
	// 앞단수와 뒷단수를 입력받고
	// 해당 범위의 단수를 저장할 동적배열을 만들고
	// 값을 저장한 후에 출력해보세요...
	// 예) 2단  5단 을 입력하면 2, 3, 4, 5 단을 입력할 동적배열을
	// 만들고 구구단을 입력하고 값을 출력

	int minRange = 0;
	int maxRange = 0;

	// 단수의 범위를 입력하세요.
	printf("앞의 단수를 입력하세요: ");
	scanf_s("%d", &minRange);
	printf("뒤의 단수를 입력하세요: ");
	scanf_s("%d", &maxRange);

	int row = maxRange - minRange + 1;

	int** pparray = (int**)malloc(sizeof(int*) * row);

	for (int i = 0; i < row; i++)
	{
		pparray[i] = (int*)malloc(sizeof(int) * 9);
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			pparray[i][j] = (i + minRange) * (j + 1);
		}
	}

	for (int i = 0; i < row; i++)
	{
		printf("<%d단>\n", i + minRange);

		for (int j = 0; j < 9; j++)
		{
			printf("%d x %d = %d\n", i + minRange, j + 1, pparray[i][j]);
		}
	}

	for (int i = 0; i < row; i++)
	{
		free(pparray[i]);
	}

	free(pparray);

	
	
	// 다른 풀이

	// 일차원 배열을 만든후에 이차원 배열로 형변환
	int* pgugudan = (int*)malloc(sizeof(int) * row * 9); // 동적 1차원 배열
	int(*gugudanArray)[9] = (int(*)[9])pgugudan;   // int* -> int [][9] (int(*)[9])

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < 9; j++) {
			gugudanArray[i][j] = (i * minRange) * (j + 1);
		}
	}

	for (int i = 0; i < row; i++) {
		printf("--- %d단 ---\n", i + minRange);
		for (int j = 0; j < 9; j++) {
			printf("%d x %d = %d\n", i + minRange, j + 1, gugudanArray[i][j]);
		}

		printf("\n");
	}

	free(gugudanArray);


	return 0;
}