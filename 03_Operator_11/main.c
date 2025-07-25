#include <stdio.h>

int main() {
	// 컴퓨터에서 음의 정수
	char a;
	unsigned char b;

	a = -1;   // 1111 1111
	b = (unsigned char)a; // 1111 1111
	printf("b = %d\n", b);

	// 1의 보수: 비트를 반전 시킨 수.
	// 2의 보수: 1의 보수에 1을 더한 수.

	// 음수
	// 2의 보수연산 처리..
	a = 2; // 00000010
	a = -a;
	//  a : 00000010
	//      11111101 // 1의 보수
	//      11111110 // 2의 보수 (-2)

	a = 2 - 2;
	a = 2 + (-2);

	// 보수연산을 이용해서 뺄셈을 처리합니다.

	//         2:  00000010
	//        -2:  11111110
	// 2 + (-2) :  00000000 

	int b = 3;
	int c = 2;
	int d = 0;

	d = b - c;
	d = b + (-c);

	//   b(3): 00000011
	//   c(2): 00000010
	//         11111101 (1의 보수)
	//         11111110 (2의 보수)

	//    b(3):     00000011
	//   c(-2):     11111110
	//   b + (-c):  00000001

	return 0;
}