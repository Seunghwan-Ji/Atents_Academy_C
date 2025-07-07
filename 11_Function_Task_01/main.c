#include <stdio.h>

void ChangeValue(int* value1, int* value2)
{
	int temp = *value1;

	*value1 = *value2;
	*value2 = temp;
}

int main() {
	int a = 20;
	int b = 30;

	int* pa = &a;
	int* pb = &b;

	// pa변수와 pb변수의 주소값을 전달해서
	// 메인함수의 a변수와 b변수의 값을 서로 바꾸는 함수를 만들고
	// 함수를 실행한 후에 a변수의 값과 b변수의 값을 출력해보세요...

	printf("before Swap a = %d, b = %d\n", a, b);

	// 함수호출
	ChangeValue(&pa, &pb);


	printf("After Swap a = %d, b = %d\n", a, b);

	return 0;
}