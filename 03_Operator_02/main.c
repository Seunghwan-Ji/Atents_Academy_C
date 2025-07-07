#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// % 나머지 연산자
// 임의의 값을 일정한 범위값을 만들때 사용.

int main()
{
	srand(time(NULL)); // 현재의 시간으로 랜덤(난수) 씨드값(초기값)을 생성.

	int randValue = rand(); // 난수를 발생 0 ~ 32767
	int directValue = randValue % 4; // 0: Up, 1: Down, 2: Left, 3: Right

	printf("randValue = %d, directValue = %d\n", randValue, directValue);

	for (int i = 0; i < 10; i++)
	{
		randValue = rand();
		directValue = randValue % 4;
		printf("randValue = %d, directValue = %d\n\n", randValue, directValue);
	}
}