#include <stdio.h>

int main() {
	// 비트 연산자
	unsigned char a = 2;  // 00000010
	unsigned char b = 3;  // 00000011
	unsigned char c = 0;  // 00000000

	// 비트 And(&)
	// 비트 Or(|)
	// 비트 not(~)
	// eXclusive or(배타적Or) (^)
	// << 왼쪽 shift
	// >> 오른쪽 shift

	c = a & b;
	//			a:  00000010
	//			b:  00000011
	//      a & b:  00000010
	printf("c = %d\n", c);

	c = a | b;
	//          a:  00000010
	//          b:  00000011
	//      a | b:  00000011
	printf("c = %d\n", c);

	c = ~a;
	//          a:  00000010
	//         ~a:  11111101
	printf("c = %d\n", c);

	c = a ^ b;
	//          a:  00000010
	//          b:  00000011
	//      a ^ b:  00000001
	printf("c = %d\n", c);


	return 0;
}