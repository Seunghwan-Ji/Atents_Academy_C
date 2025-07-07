#include <stdio.h>

int main() {
	// 0 ~ 99까지 저장하세요..
	int a0 = 0;
	int a1 = 1;
	// ...
	int a98 = 98;
	int a99 = 99;

	// 저장되어있는 값중에서 짝수만 출력해보세요..
	if (a0 % 2 == 0) {
		printf("a0 = %d짝수입니다.\n", a0);
	}

	if (a1 % 2 == 0) {
		printf("a1 = %d짝수입니다.\n", a0);
	}

	// ...
	if (a98 % 2 == 0) {
		printf("a98 = %d짝수입니다.\n", a0);
	}

	if (a99 % 2 == 0) {
		printf("a99 = %d짝수입니다.\n", a0);
	}

	// 동일한 DataType의 공간이 여러개 필요할때 
	// 사용할 수 있는 편리한 기능이 있습니다.
	// 이것을 배열(Array)이라고 합니다.

	// DataType 배열명[배열요소의 갯수];
	// 배열명은 배열이 할당된 메모리공간의 선두번지 주소값입니다.
	// 배열명을 주소상수라고합니다.

	int array[100];

	printf("array = %p\n", array);

	//array = 2;

	for (int i = 0; i < 100; i++) {
		array[i] = i;
	}

	for (int i = 0; i < 100; i++) {
		if (array[i] % 2 == 0) {
			printf("array[%d] = %d 는 짝수입니다.\n", i, array[i]);
		}
	}

	return 0;
}