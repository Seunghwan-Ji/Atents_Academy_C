#include <stdio.h>

int main() {
	int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	int length = sizeof(array) / sizeof(array[0]);

	int* parray = array + (length - 1);


	// parray변수에는 배열 array의 맨끝쪽 주소가 저장되어있습니다.
	// parray를 이용해서 배열의 뒤에서부터 앞쪽까지 출력해보세요.

	while (length > 0) {
		printf("array[%d] = %d\n", --length, *parray--);
	}

	printf("\n\n");
	length = sizeof(array) / sizeof(array[0]);
	parray = array + (length - 1);

	for (int i = 0; i < length; i++) {
		printf("array[%d] = %d\n", length - (i + 1), *parray--);
	}


	printf("\n\n");

	for (int i = 0; i < length; i++) {
		printf("parray[%d] = %d\n", length - (i + 1), array[length - (i + 1)]);
	}





	return 0;
}