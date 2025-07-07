#include <stdio.h>

int main() {	

	// 1. 구구단의 9단을 배열을 만들고 저장하고 배열에 저장된 값을 
	// 출력해보세요.
	printf("1번문제\n");

	int GudanArray[9];

	for (int i = 0; i < 9; i++) {
		GudanArray[i] = 9 * (i + 1);
	}	

	for (int i = 0; i < 9; i++) {
		printf("9 x %d = %d\n", i + 1, GudanArray[i]);
	}

	/*
	for (int i = 1; i <= 9; i++) {
		GudanArray[i - 1] = 9 * i;
	}

	for (int i = 1; i <= 9; i++) {
		printf("9 x %d = %d\n", i, GudanArray[i - 1]);
	}
	*/


	printf("\n2번문제\n");
	// 2. 구구단을 2단 ~ 9단까지 배열에 저장하고 배열에 저장된 값을
	// 출력해보세요..
	int GugudanArray[72];

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			GugudanArray[i * 9 + j] = (i + 2) * (j + 1);
		}
	}

	printf("\n");
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			printf("%d x %d = %d\n", i + 2, j + 1, GugudanArray[i * 9 + j]);
		}
		printf("\n");
	}


	printf("\n3번문제\n");
	// 3. 구구단을 2단 부터 9단까지 저장하고
	// 단수를 입력받아서 배열에 저장된 단수를 출력해보세요...

	int dansu = 0;
	printf("단수를 입력하세요(2~ 9): ");
	scanf_s("%d", &dansu);

	if (dansu < 2 || dansu > 9) {
		printf("단수를 잘못입력하셨습니다.\n");
	}
	else {
		printf("-- %d단을 출력합니다. --", dansu);
		for (int i = 0; i < 9; i++) {
			printf("%d x %d = %d\n", dansu, i + 1, GugudanArray[(dansu - 2) * 9 + i]);
		}
	}




	return 0;
}