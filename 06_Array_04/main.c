#include <stdio.h>

int main() {
	// 배열을 생성하면서 초기값을 부여할 수 있습니다.
	// 초기값이 부여된 경우에는 배열요소의 갯수를 생략할 수 있습니다.
	double dArray[] = { 3.4, 4.5, 7.8, 1.3, 12.34, 18.6, 2.2, 11.11, 13.45, 15.6, 18.9, 10.2 };

	// 배열요소의 갯수 = 배열의 전체 바이트수 / 배열 요소의 바이트수
	int length = sizeof(dArray) / sizeof(dArray[0]);

	for (int i = 0; i < length; i++) {
		printf("dArray[%d] = %lf\n", i, dArray[i]);
	}

	printf("\n\n");
	dArray[5] = 123.456;

	for (int i = 0; i < length; i++) {
		printf("dArray[%d] = %lf\n", i, dArray[i]);
	}




	return 0;
}