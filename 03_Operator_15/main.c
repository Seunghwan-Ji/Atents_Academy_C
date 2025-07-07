#include <stdio.h>

// Xor(eXclusive OR, 배타적 OR)


int main() {
	// xor
	unsigned char a = 1;  // 00000001
	unsigned char b = 2;  // 00000010
	unsigned char c = 0;  // 00000000


	unsigned int d = 1;  // 00000000 00000000 00000000 00000001

	c = a ^ b;
	//      a:    00000001 (1)
	//      b:    00000010 (2)
	//  a ^ b:    00000011 (3)

	//      c:    00000011
	//      b:    00000010
	//  c ^ b:    00000001

	//      c:    00000011
	//      a:    00000001
	//  c ^ a:    00000010

	// 문제
	// xor 연산자와 a변수와 b변수, 대입연산자 만을 사용해서
	// a변수에 있는 값과 b변수에 있는 값을 바꾸세요..
	a = 1;
	b = 2;

	printf("before a = %d, b = %d\n", a, b);

	a = a ^ b;
	//    00000001 (a)
	//    00000010 (b)
	//    00000011 (a = a ^ b)

	b = a ^ b;
	//   00000011 (a)
	//   00000010 (b)
	//   00000001 (b = a ^ b)

	a = a ^ b;
	//   00000011 (a)
	//   00000001 (b)
	//   00000010 (a = a ^ b)

	printf("after a = %d, b = %d\n", a, b);




	return 0;
}