#include <stdio.h>
#include <stdlib.h>
// ���� ������ �迭

int main() {
	// ������ �߿� 
	// �մܼ��� �޴ܼ��� �Է¹ް�
	// �ش� ������ �ܼ��� ������ �����迭�� �����
	// ���� ������ �Ŀ� ����غ�����...
	// ��) 2��  5�� �� �Է��ϸ� 2, 3, 4, 5 ���� �Է��� �����迭��
	// ����� �������� �Է��ϰ� ���� ���

	int minRange = 0;
	int maxRange = 0;

	// �ܼ��� ������ �Է��ϼ���.
	printf("���� �ܼ��� �Է��ϼ���: ");
	scanf_s("%d", &minRange);
	printf("���� �ܼ��� �Է��ϼ���: ");
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
		printf("<%d��>\n", i + minRange);

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

	
	
	// �ٸ� Ǯ��

	// ������ �迭�� �����Ŀ� ������ �迭�� ����ȯ
	int* pgugudan = (int*)malloc(sizeof(int) * row * 9); // ���� 1���� �迭
	int(*gugudanArray)[9] = (int(*)[9])pgugudan;   // int* -> int [][9] (int(*)[9])

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < 9; j++) {
			gugudanArray[i][j] = (i * minRange) * (j + 1);
		}
	}

	for (int i = 0; i < row; i++) {
		printf("--- %d�� ---\n", i + minRange);
		for (int j = 0; j < 9; j++) {
			printf("%d x %d = %d\n", i + minRange, j + 1, gugudanArray[i][j]);
		}

		printf("\n");
	}

	free(gugudanArray);


	return 0;
}