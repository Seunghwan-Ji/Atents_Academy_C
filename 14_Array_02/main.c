#include <stdio.h>
// 2���� �迭 ���� �����ϱ�

// �����ͽ�
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

// �迭��
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


	// ����
	// ������ �迭 array�� ������(0 ~ 99)�� �����ϴ� �Լ��� ����� array�迭�� ���� �����ϰ�
	// array�� �ִ� ���� ����ϴ� �Լ��� ����� ����Ͻÿ�.

	SaveNumber(10, array);
	PrintArray(10, array);

	return 0;
}