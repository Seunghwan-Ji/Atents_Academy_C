#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void BitPrint(unsigned char value) {
	unsigned char mask = 1;
	unsigned char bitValue = 0;

	for (int i = sizeof(unsigned char) * 8 - 1; i >= 0; i--) {
		mask = 1;
		mask <<= i;

		bitValue = value & mask;

		if (bitValue) {
			printf("1");
		}
		else {
			printf("0");
		}
	}
}

int main() {
	unsigned char light = 0;	// 00000000
	int roomNumber = 0;		// 방번호 입력용
	int onOff = -1;			// light on/off 입력용

	unsigned char mask = 1;	// 비트의 자리수를 컨트롤하기 위한 변수


	while (1) {
		mask = 1;
		printf("방번호를 입력하세요(exit: -1) : ");
		scanf_s("%d", &roomNumber);

		if (roomNumber == -1) break;	// 입력 중지

		printf("%d번째 방의 전등 On(1), 전등 Off(0): ", roomNumber);
		scanf_s("%d", &onOff);

		mask <<= roomNumber;
		// mask = mask << roomNumber;

		if (onOff == 1) {	// 전등 켜기 // maskON
			light = light | mask;
		}
		else {
			mask = ~mask;
			light = light & mask;
		}

		printf("light = %d\n", light);
		BitPrint(light);
		printf("\n");
	}


	return 0;
}