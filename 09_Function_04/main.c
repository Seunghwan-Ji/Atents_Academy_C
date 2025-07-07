#include <stdio.h>

int RetBigger(int number1, int number2)
{
	return number1 > number2 ? number1 : number2;
}


int main()
{
	int number1 = 0;
	int number2 = 0;

	printf("2개의 정수값을 입력하세요.(10 20): ");
	scanf_s("%d %d", &number1, &number2);

	// 두개의 정수값을 입력받아서 입력 받은 두개의 정수 중에 
	// 큰값을 리턴하는 함수를 만들고
	// 만든 함수를 사용해서 입력받은 두 값중 큰값을 출력해보세요.

	printf("%d\n", RetBigger(number1, number2));


	return 0;
}