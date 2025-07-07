#include <stdio.h>

int main() {
	// while, do-while

	int loopCount = 0;

	printf("\nwhile문\n");
	printf("정수값을 입력하세요: ");
	scanf_s("%d", &loopCount);

	// 반복횟수는 모르지만 조건식을 
	// 만족하는 동안에는 얼마든지 명령어를 반복해도 되는 경우
	// while(조건식){
	//   반복할 명령어들;
	//}

	while (loopCount > 0) {
		loopCount -= 10;

		printf("loopCount = %d\n", loopCount);
	}

	printf("\ndo -while문\n");
	printf("정수값을 입력하세요: ");
	scanf_s("%d", &loopCount);

	do {
		loopCount -= 10;

		printf("loopCount = %d\n", loopCount);
			
	} while (loopCount > 0);


	return 0;
}