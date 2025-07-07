#include <stdio.h>

int main() {
	// & (비트 And) : 특정자리의 비트값을 0으로 만들때 사용 : mask off
	// | (비트 Or) : 특정자리의 비트값을 1로 만들때 사용 : mask on
	unsigned char item = 10;	// 00001010
	unsigned char mask = 1; // 00000001

	mask = mask << 3;
	//     00000001
	//     00001000 (mask)

	mask = ~mask;
	//   mask:  00001000
	//  ~mask:  11110111

	item = item & mask;

	//        item:  00001010
	//        mask:  11110111
	// item & mask:  00000010

	mask = 1;

	mask = mask << 3;

	//      mask : 00001000

	item = item | mask;
	//       item:    00000010
	//       mask:    00001000
	//item | mask:    00001010





	return 0;
}