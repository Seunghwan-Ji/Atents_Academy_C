//- C 강의 실습 문자로 도형만들기 -
//문자로 도형만들기
#include <stdio.h>
#include <conio.h>

int main() {
	int count = 10;

	printf("속이 찬 사각형\n");
	// 사각형
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			printf("*");
		}
		printf("\n");
	}



	// 속이 빈 사각형
	printf("속이 빈 사각형\n");

	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			if (i == 0 || j == 0 || i == count - 1 || j == count - 1) {
				printf("*");
			}
			else {
				printf(" "); // 공백문자
			}
		}
		printf("\n");
	}


	printf("\n\n");
	printf("직각 삼각형\n");
	// 직각 삼각형


	printf("\n\n");
	printf("역 직각 삼각형\n");
	// 역 직각삼각형


	printf("\n\n");
	printf("정삼각형\n");
	// 정삼각형


	printf("\n\n");
	printf("역 정삼각형\n");
	// 역정삼각형


	printf("\n\n");
	printf("속 빈 정삼각형\n");
	// 속이 빈 정삼각형


	printf("\n\n");
	printf("속 빈 역정삼각형\n");
	// 속이 빈 역정삼각형



	return 0;
}