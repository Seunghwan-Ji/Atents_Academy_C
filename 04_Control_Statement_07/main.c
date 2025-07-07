#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int inputValue = 0;

	printf("1 ~ 10 사이의 번호를 입력하세요: ");
	scanf_s("%d", &inputValue);

	switch (inputValue) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 9:
		printf("입력하신 숫자는 홀수 입니다.\n");
		break;

	case 2:
	case 4:
	case 6:
	case 8:
	case 10:
		printf("입력하신 숫자는 짝수입니다.\n");
		break;

	default:
		printf("잘못된 번호입니다.\n");
		break;
	}

	// 정수값 2개와 연산방법(+, -, x, /)을 입력받고
	// 입력된 연산 방법으로 입력받은 정수값 2개를 계산하여 
	// 결과값을 출력하는 계산기를 만드세요..

	char oper = 0;
	int left = 0;
	int right = 0;


	printf("연산기호를 입력하세요: ");
	scanf_s("%*c%c", &oper);

	printf("정수를 두개 입력히세요:");
	scanf_s("%d %d", &num1, &num2);

	return 0;
}