#include <stdio.h>

int main()
{
	unsigned char ch = 'A';

	printf("�����ϳ��� �Է��ϼ���: ");
	scanf_s("%c", &ch);

	if (ch == 'A') // ���� ���ǹ�
	{
		printf("ch ������ ���� A�����Դϴ�.\n");
	}
	else
	{
		printf("ch ������ ���� A���ڰ� �ƴմϴ�.\n");
	}

	// if���� �پ��ִ� ��ɾ ������ ��쿡�� {}(�߰�ȣ ��)��
	// ������ �� �ֽ��ϴ�.

	if (ch == 'B')
		printf("ch ������ ���� B �����Դϴ�.\n");
	else
		printf("ch ������ ���� B ���ڰ� �ƴմϴ�.\n");

	int a = 20;
	int b = 30;

	if (a < b)
	{
		printf("a: &d�� b: %d ���� �۴�.\n", a, b);
	}
	else
	{
		printf("a: &d�� b: %d ũ�ų� ����.\n", a, b);
	}

	if (b - 30) // �������� ���
	{
		if (b < 30)
		{
			printf("b�� 30���� �۴�.\n");
		}
		else
		{
			printf("b�� 30���� ũ��.\n");
		}
	}
	else
	{
		printf("b�� 30�Դϴ�.\n");
	}

	return 0;
}