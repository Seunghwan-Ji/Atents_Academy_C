#include <stdio.h>

// ���ڿ�

// C�� ���� ��ÿ� ���ڿ� ���õ� �Լ����� ����µ�

// ���ڹ迭 ����Լ�
void PrintCharArray(char* str, int size)
{
	for (int i = 0; i < size; i++)
	{
		putchar(str[i]);
	}
}

// ���ڿ��� �ٷ�����ؼ� ���ڹ迭�� ���ι��� �ּҰ�, �迭�� ����� ������ ������
// �����ؾ� �ϴ� �������� �ֽ��ϴ�.
void Func(char* str, int size)
{
	// PrintCharArray(str, size);
}

// ���ڿ� ����Լ�
// ���ڹ迭�� ���ڿ��� �ٷ�� ������ ������ ���ڹ迭�ڿ� �����Ṯ��(\0)�� �ְ�
// ���ڹ迭�ڿ� �����Ṯ�ڰ� �ִ� ���� ���ڿ��̶�� ���Ǹ� �߽��ϴ�.
void PrintString(char* pStr)
{
	while (*pStr)
	{
		putchar(*pStr);
		pStr++;
	}
}

int main()
{
	char str[] = { 'M', 'O', 'N', 'S', 'T', 'E', 'R' };   // ���ڹ迭
	char str2[] = "Monster";   // ���ڿ�
	char str3[] = { 'M', 'O', 'N', 'S', 'T', 'E', 'R', '\0' };   // ���ڿ�

	printf("str size = %d\n", sizeof(str));
	printf("str2 size = %d\n", sizeof(str2));
	printf("str3 size = %d\n", sizeof(str3));

	printf("\n���ڹ迭 ����Լ�\n");
	printf("str ���ڹ迭: ");
	PrintCharArray(str, sizeof(str));
	printf("\n");
	printf("str2 ���ڹ迭: ");
	PrintCharArray(str2, sizeof(str2));
	printf("\n");
	printf("str3 ���ڹ迭: ");
	PrintCharArray(str3, sizeof(str3));
	printf("\n");

	printf("���ڿ� ����Լ�\n");
	printf("str ���ڹ迭: ");
	PrintString(str);
	printf("\n");
	printf("str2 ���ڿ�: ");
	PrintString(str2);
	printf("\n");
	printf("str3 ���ڿ�: ");
	PrintString(str3);
	printf("\n");
}