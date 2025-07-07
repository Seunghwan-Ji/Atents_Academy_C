#include <stdio.h>
// 증감연산자
// 변수의 값을 1증가 시키겨나 1감소 감소 시킬때 사용합니다.

int main() {
	int a = 20;
	int c = 0;

	printf("++ 연산자\n");
	++a; // 전치형
	// a = a + 1;
	printf("++a = %d\n", a);

	a++; // 후치형
	// a = a + 1;
	printf("a++ = %d\n", a);
	// 증감연산자는 대입할때 전치형과 후치형의
	// 작동방법이 다릅니다.

	c = a++; // 후치형
	// c = a;
	// a = a + 1;
	printf("c = %d, a = %d\n", c, a);

	c = ++a;	// 전치형
	// a = a + 1;
	// c = a;
	printf("c = %d, a = %d\n", c, a);

	printf("\n-- 연산자\n");
	--a;
	// a = a - 1;

	a--;
	// a = a - 1;

	c = --a;
	// a = a - 1;
	// c = a;

	c = a--;
	// c = a;
	// a = a - 1;



	return 0;
}