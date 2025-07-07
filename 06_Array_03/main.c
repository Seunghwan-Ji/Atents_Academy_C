#include <stdio.h>

int main() {
	int min = 0;


	printf("min 값을 입력하세요: ");
	scanf_s("%d", &min);

	int array[100];

	for (int i = min; i < min + 100; i++) {
		array[i - min] = i;
	}

	for (int i = 0; i < 100; i++) {
		if (array[i] % 2 == 0) {
			printf("%d는 짝수입니다.\n", array[i]);
		}
	}


	return 0;
}