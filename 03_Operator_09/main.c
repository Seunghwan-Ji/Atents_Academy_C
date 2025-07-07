#include <stdio.h>
// 대입연산자


int main() {
	int a = 0;
	int c = 100;
	float b = 1.5f;

	a = b;	// 기본 DataType간의 대입은 컴파일러가 형변환을 자동으로 시켜버립니다.
	// 묵시적 형변환

// 실수값을 정수형 변수에 대입할때는 묵시적 형변환을 하면 안됩니다.
// 명시적 형변환을 해야 합니다.
	a = (int)b;
	printf("a = %d\n", a);

	b = c; // 정수값을 실수형 변수에 대입에는 묵시적형변환을 해도 됩니다.
	// 값의 유실이 발생하지 않습니다.

	printf("b = %f\n", b);

	// 대입연산자 축약형

	a += 1;
	// a = a + 1;
	printf("a = %d\n", a);

	c /= 2;
	// c = c /2;
	printf("c = %d\n", c);

	c *= 2;
	// c = c * 2;
	printf("c = %d\n", c);



	return 0;
}