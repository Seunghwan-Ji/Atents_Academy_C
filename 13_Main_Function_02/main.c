#include <stdio.h>

// 진입점 함수
int main(int argc, char* argv[])
{
	int sum = 0;
	for (int i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]); // atoi 숫자문자열을 값으로 변경
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