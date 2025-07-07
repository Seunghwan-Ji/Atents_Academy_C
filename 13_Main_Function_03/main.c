#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	// char** argv 의 의미
	// "문자열의 배열"을 가리키는 포인터
	// 각 요소는 char* (즉, 하나의 문자열)
	// 따라서 char** argv는 char*들이 모인 배열의 시작 주소를 가리킴

	// 문제 1. 명령행 인자로 이름을 전달하고 실행을 하면
	// xxx씨 안녕하세요. 를 출력하는 프로그램을 만드세요.
	
	if (argc == 2)
	{
		printf("%s씨 안녕하세요.", argv[1]);
	}

	// 문제 2. 명령행 인자로 12 + 13 이런식으로 입력하면
	// 계산의 결과값을 출력해주는 프로그램을 만드세요. (사칙연산이 가능하게 만드세요.)

	int iLeft = atoi(argv[1]);
	int iRight = atoi(argv[3]);

	// char형도 정수형이기 때문에 스위치 케이스문 작성 가능.
	switch (*argv[2])
	{
	case '+':
		printf("%d + %d = %d\n", iLeft, iRight, iLeft + iRight);
		break;

	case '-':
		printf("%d - %d = %d\n", iLeft, iRight, iLeft - iRight);
		break;

	case 'x':
		printf("%d * %d = %d\n", iLeft, iRight, iLeft * iRight);
		break;

	case '/':
		printf("%d / %d = %f\n", iLeft, iRight, iLeft / (float)iRight);
		break;
	}


	return 0;
}