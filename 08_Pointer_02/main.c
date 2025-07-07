#include <stdio.h>

// 포인터(Pointer)

int main() {
	int a;
	a = 20;

	int* pa = &a;

	// 변수 pa 에 저장된 값을 저장하는 변수 pb를 만들고
	// 변수 pb로 변수 a의 값을 1000으로 변경하고 변경된 변수 a의 
	// 값을 출력해보세요..
	int* pb;
	pb = pa;

	*pb = 1000;

	printf("a = %d\n", a);



	return 0;
}