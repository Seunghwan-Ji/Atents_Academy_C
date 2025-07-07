#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Monster"; // 문자열
	char str2[] = " is World!!"; // 문자열
	char buff[30]; // 문자 배열

	// 1. 문자열의 문자갯수를 세는 함수 : strlen
	printf("\nStrlen\n");
	int count = strlen(str);

	printf("str: %s의 문자의 갯수는 %d\n", str, count);

	// 2. 문자열 복사 함수: strcpy
	printf("\n\nstrcpy\n");
	strcpy(buff, str);

	printf("str: %s 문자열을 buff: %s로 복사함\n", str, buff);

	// 3. 문자열 비교함수 strcmp 같으면 0을 리턴, 다르면 1또는 -1을 리턴
	printf("\n\nstrcmp\n");
	int ret = strcmp(str, buff);

	if (ret == 0)
	{
		printf("str: %s 와 buff: %s가 같다.\n", str, buff);
	}
	else
	{
		printf("str: %s 와 buff: %s가 다르다.\n", str, buff);
	}

	ret = strcmp(str, str2);

	if (ret == 0)
	{
		printf("str: %s 와 str2: %s가 같다.\n", str, str2);
	}
	else
	{
		printf("str: %s 와 str2: %s가 다르다.\n", str, str2);
	}

	// 4. 문자열 병합 함수: 두문자열 합침 strcat
	printf("\n\nstrcat\n");
	printf("buff: %s와 str2: %s 두 문자열을 병합합니다.\n", buff, str2);
	strcat(buff, str2);

	printf("buff: %s에 두 문자열이 병합됨\n", buff);

	// 5. 소문자를 대문자로 변경, 대문자를 소문자로 변경
	printf("\n\ntoupper, tolower\n");
	int ch = toupper('a');

	printf("대문자 변경: %c\n", ch);

	ch = tolower('A');
	printf("소문자 변경: %c\n", ch);


	return 0;

}