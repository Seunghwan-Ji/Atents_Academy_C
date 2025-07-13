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

	c = a & b; // 둘 다 1이어야 1.
	//			a:  00000010
	//			b:  00000011
	//      a & b:  00000010
	printf("c = %d\n", c);

	c = a | b; // 둘 중 하나라도 1이면 1.
	//          a:  00000010
	//          b:  00000011
	//      a | b:  00000011
	printf("c = %d\n", c);

	c = ~a; // 비트 반전.
	//          a:  00000010
	//         ~a:  11111101
	printf("c = %d\n", c);

	c = a ^ b; // 같으면 0, 다르면 1 (비트가 다른 부분을 뽑아낸다.)
	//          a:  00000010
	//          b:  00000011
	//      a ^ b:  00000001
	printf("c = %d\n", c);


	return 0;
}