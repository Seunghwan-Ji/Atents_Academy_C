#include <stdio.h>

int main()
{
	// ���迬������ ������ ������� DataType? ��Ÿ��
	// ���������� �ǿ������� DataType? ��Ÿ��

	int xValue = 0;

	printf("������ �������� �Է��ϼ���: ");
	scanf_s("%d", &xValue);

	int ret = (0 < xValue) && (xValue < 10);

	if (ret == 1)
	{
		printf("xvalue: %d�� 0�� 10���̿� �ִ�.", xValue);
	}
	else
	{
		printf("xvalue: %d�� 0�� 10���̿� ����.", xValue);
	}

	return 0;
}