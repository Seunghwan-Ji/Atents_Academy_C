#include <stdio.h>

// 문자열

// C언어를 만들 당시에 문자열 관련된 함수들을 만드는데

// 문자배열 출력함수
void PrintCharArray(char* str, int size)
{
	for (int i = 0; i < size; i++)
	{
		putchar(str[i]);
	}
}

// 문자열을 다루기위해서 문자배열의 선두번지 주소값, 배열의 요소의 갯수를 쌍으로
// 전달해야 하는 불편함이 있습니다.
void Func(char* str, int size)
{
	// PrintCharArray(str, size);
}

// 문자열 출력함수
// 문자배열로 문자열을 다루는 불편함 때문에 문자배열뒤에 널종료문자(\0)을 넣고
// 문자배열뒤에 널종료문자가 있는 것을 문자열이라고 정의를 했습니다.
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
	char str[] = { 'M', 'O', 'N', 'S', 'T', 'E', 'R' };   // 문자배열
	char str2[] = "Monster";   // 문자열
	char str3[] = { 'M', 'O', 'N', 'S', 'T', 'E', 'R', '\0' };   // 문자열

	printf("str size = %d\n", sizeof(str));
	printf("str2 size = %d\n", sizeof(str2));
	printf("str3 size = %d\n", sizeof(str3));

	printf("\n문자배열 출력함수\n");
	printf("str 문자배열: ");
	PrintCharArray(str, sizeof(str));
	printf("\n");
	printf("str2 문자배열: ");
	PrintCharArray(str2, sizeof(str2));
	printf("\n");
	printf("str3 문자배열: ");
	PrintCharArray(str3, sizeof(str3));
	printf("\n");

	printf("문자열 출력함수\n");
	printf("str 문자배열: ");
	PrintString(str);
	printf("\n");
	printf("str2 문자열: ");
	PrintString(str2);
	printf("\n");
	printf("str3 문자열: ");
	PrintString(str3);
	printf("\n");
}