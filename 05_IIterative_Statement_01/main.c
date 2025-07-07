#include <stdio.h>

// 반복문
// for, while, do-while(사용빈도가 낮습니다.)

int main() {
	// for문은 반복횟수를 아는 경우에 사용하기 좋은 구조로 되어 있습니다.
	// 
	// for(초기식; 조건식; 증감식){
	//			반복할 명령어들;
	// }
	for (int i = 0; i < 10; i++) {
		printf("i = %d\n", i);
	}


	/*
	for (;;) { // 초기식, 조건식, 증감식 생략

	}

	for (int i = 0; ;) { // 조건식, 증감식 생략

	}

	int i = 0;
	for (; i < 10; ) { // 초기식 , 증감식 생략
	}
	*/

	printf("\n\n");
	printf("단일 for문\n");
	for (int i = 0; i < 10; i += 2) {
		printf("i = %d\n", i);
	}


	printf("\n이중 for문\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("i = %d, j = %d\n", i, j);
		}
	}

	printf("\n삼중 for문\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				printf("i = %d, j = %d, k = %d\n", i, j, k);
			}
		}
	}

	for (float a = 0.0f; a < 100.0f; a += 1.2f) {
		printf("a = %f\n", a);
	}

	for (int i = 0, j = 10; i < 10 && j > 0; i++, j--) {
		printf("i = %d, j = %d\n", i, j);
	}


	return 0;
}