#include <stdio.h>

int main() {
	// 1. 0 ~ 100까지의 숫자중에서 짝수만 출력하세요.
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			printf("i는 짝수입니다.\n", i);
		}
	}

	printf("\n\n");
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 1) {
			continue; // continue문은 반복문안에서 사용이 되며
						// continue문이 선언된 위치에서 아래쪽 방향에 있는 명령어를 건너뛸때 사용합니다.
		}

		printf("%d는 짝수입니다.\n", i);

	}

	printf("\n\n");
	for (int i = 1; i <= 100; i++) {
		if (i & 1 == 1) { // 홀수
			continue;	
		}

		printf("%d는 짝수입니다.\n", i);
	}

	printf("\n\n");
	for (int i = 1; i <= 100; i++) {
		if (i & 1 == 0) { // 짝수
			printf("%는 짝수입니다.\n", i);
		}
	}
		


	// 2. 0 ~ 100까지 숫자중에서 3의배수이면서 2의 배수인것만 출력 해보세요.
	printf("\n\n");
	for (int i = 1; i <= 100; i++) {
		if ((i % 2 == 0) && (i % 3 == 0)) {
			printf("%d는 2의 배수이면서 3의 배수입니다.\n", i);
		}

	}


	return 0;
}