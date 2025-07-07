#include <stdio.h>

int main() {
	// ���� 1. ������ �迭�� ����� ������(2�� ~ 9��)�� ���� �����ϰ�
	// ���� ������ �迭�� ���� ����غ�����(2 ~ 9�ܱ��� ���)

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

	// ���� 2. �ܼ��� �Է¹ް�
	// �迭�� ����� ������ �ش� �ܼ��� ����Ͻÿ�

	int iDan = 2;

	printf("\n\n");
	printf("�� �� �Է�: ");
	scanf_s("%d", &iDan);
	printf("\n");

	for (int j = 0; j < 9; j++)
	{
		printf("%d x %d = %d\n", iDan, j + 1, iGugudanArr[iDan - 2][j]);
	}

	return 0;
}