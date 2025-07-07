#include <stdio.h>

int main() {
	// & (��Ʈ And) : Ư���ڸ��� ��Ʈ���� 0���� ���鶧 ��� : mask off
	// | (��Ʈ Or) : Ư���ڸ��� ��Ʈ���� 1�� ���鶧 ��� : mask on
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