#include <stdio.h>

// scanf_s는 키보드에서 문자형태의 값을 입력받는 함수이다.
// %d: 정수값
// %f: 실수값
// %c: 문자값
// %s: 문자열

int main()
{
	int isLeg = 0;
	int isHand = 0;
	int isHead = 0;
	int isThink = 0;
	int is2Eyes = 0;
	int isGugudan = 0;

	printf("다리가 2개 있습니까?(거짓: 0, 참: 1)");
	scanf_s("%d", &isLeg);

	printf("팔이 2개 있습니까?(거짓: 0, 참: 1)");
	scanf_s("%d", &isHand);

	printf("머리가 있습니까?(거짓: 0, 참: 1)");
	scanf_s("%d", &isHead);

	printf("생각을 합니까?(거짓: 0, 참: 1)");
	scanf_s("%d", &isThink);

	printf("눈이 2개 있습니까?(거짓: 0, 참: 1)");
	scanf_s("%d", &is2Eyes);

	printf("구구단을 외울 수 있습니까?(거짓: 0, 참: 1)");
	scanf_s("%d", &isGugudan);

	int isHuman = isLeg && isHand && isHead && isThink && is2Eyes && isGugudan;

	if (isHuman)
	{
		printf("인간 입니다.\n");
	}
	else
	{
		printf("인간이 아닙니다.\n");
	}

	return 0;
}