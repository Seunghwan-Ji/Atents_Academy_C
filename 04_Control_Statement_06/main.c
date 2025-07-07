#include <stdio.h>

int main() {
	char oper = 0;

	printf("연산 방법을 입력하세요(+, -, x, /):");
	scanf_s("%c", &oper);


	switch (oper) {
	case '+':
	{
		// case문안에서 변수를 만들어 사용할때
		// {} (중괄호 블럭)을 쓴 후에 변수를 정의해야 합니다.
		int a = 20;
		int b = 30;

		printf("%d + %d = %d\n", a, b, a + b);
	}

	break;

	case '-':
	{
		int a = 20;
		int b = 30;

		printf("%d + %d = %d\n", a, b, a - b);
	}
	break;

	case 'x':
	case 'X':
	{
		int a = 20;
		int b = 30;

		printf("%d + %d = %d\n", a, b, a * b);
	}

	break;

	case '/':
	{
		int a = 20;
		int b = 30;

		printf("%d + %d = %f\n", a, b, a / (float)b);
	}
	break;

	default:
		printf("연산기호를 잘못 입력하셨습니다.");
		break;
	}


	return 0;
}