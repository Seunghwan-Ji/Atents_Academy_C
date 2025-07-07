#include <stdio.h>

int main() {
	int i = 2000;
	int j = 3000;
	int k = 4000;

	int limitValue = 0;

	int exit = 0;

	printf("정수값을 입력하세요: ");
	scanf_s("%d", &limitValue);

	while (i > 0) {	// 3중 while문
		i -= 10;
		while (j > 0) {
			j -= 10;
			while (k > 0) {
				k -= 10;
				printf("i = %d, j = %d, k = %d\n", i, j, k);

				unsigned int sum = i * j * k;

				if (sum < limitValue) {
					printf("sum = %d, limitValue = %d\n", sum, limitValue);
					exit = 1;
					break;	// 반복문을 탈출할때 사용
							// break문이 사용된 위치에서 가장 가까운 
							// 반복문을 탈출한다.
				}
			}

			if (exit == 1) {
				break;
			}
		}

		if (exit == 1) {
			break;
		}
	}

	// goto문을 사용
	while (i > 0) {
		i -= 10;
		while (j > 0) {
			j -= 10;
			while (k > 0) {
				k -= 10;
				printf("i = %d, j = %d, k = %d\n", i, j, k);

				unsigned int sum = i * j * k;

				if (sum < limitValue) {
					printf("sum = %d, limitValue = %d\n", sum, limitValue);

					goto LoopExit;
					// 중첩되어있는 반복문을 한번에 탈출할때 goto문을 사용하면
					// 코드를 간결하게 처리 할 수 있습니다.
				}

			}
		}
	}

LoopExit:	// 레이블




	return 0;
}