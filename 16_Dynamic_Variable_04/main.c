#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int count = 0;
	char** strArray;
	char inputString[100];

	printf("입력받을 문자열의 갯수를 입력하세요: ");
	scanf_s("%d", &count);

	// 입력받은 갯수만큼 문자열을 입력받는 프로그램을 만드세요.

	strArray = (char**)malloc(sizeof(char*) * count); // 문자열들을 저장할 배열.

	for (int i = 0; i < count; i++)
	{
		printf("%d번째 문자열 입력: ", i + 1);
		scanf_s("%s", inputString, sizeof(inputString)); // 문자열 입력받음.

		int iStrLen = strlen(inputString); // 문자열의 길이를 구한다.
		strArray[i] = (char*)malloc(sizeof(char) * (iStrLen + 1)); // 문자열을 저장할 동적배열을 할당받음.
		strcpy_s(strArray[i], iStrLen + 1, inputString); // 입력받은 문자열을 할당받은 동적배열에 복사한다.
	}

	printf("\n입력한 문자열\n");
	for (int i = 0; i < count; i++) {
		printf("%s\n", strArray[i]);
	}

	// 할당받은 동적배열을 반납처리
	// 문자열을 저장한 동적배열 반납처리
	for (int i = 0; i < count; i++) {
		free(strArray[i]);
	}

	// 문자열의 주소값 저장하는 동적배열 반납처리.
	free(strArray);


	return 0;
}