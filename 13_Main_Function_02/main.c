#include <stdio.h>

// ������ �Լ�
int main(int argc, char* argv[])
{
	int sum = 0;
	for (int i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]); // atoi ���ڹ��ڿ��� ������ ����
	}

	for (int i = 1; i < argc; i++)
	{
		printf("%s", argv[i]);

		if (i < argc - 1)
		{
			printf(" + ");
		}
	}

	printf(" = %d\n", sum);

	return 0;
}