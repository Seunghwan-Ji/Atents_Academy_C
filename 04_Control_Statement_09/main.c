#include <stdio.h>

// 무조건 분기
// goto


// 메인함수
int main() {
	int inputValue = 0;

Start: //   레이블 프로그램 코드 위치
	printf("정수값을 입력하세요(exit: -1): ");
	scanf_s("%d", &inputValue);

	if (inputValue != -1) {
		printf("입력된 값은 %d입니다. 다시 시작합니다.\n", inputValue);
		goto Start;	
	}

	printf("입력된 값은 %d입니다.  프로그램을 종료합니다.\n", inputValue);
	goto Exit; // 


	printf("절대 출력안됨\n");

Exit:
	printf("프로그래밍 종료\n");


	return 0;
}