#include <stdio.h>


int Solution(int left, int right)
{
	int sum = 0;

	for (int i = left; i <= right; i++)
	{
		if (i % 3 == 0)
		{
			++sum;
		}
	}

	return sum;
}

// 강사님 풀이

// 함수명은 함수의 기능이나 역활을 의미하는 단어나 문장을
// 사용하는 것이 좋습니다.
// 매개변수명도 받는 값의 의미를 나타내는 문장이나 단어를 사용하시는 것이 좋습니다.
int GetThreeTimesCount(int min, int max) {
	int first = 0;
	int second = 0;
	int count = 0;

	if (min > max) {
		first = max;
		second = min;
	}
	else {
		first = min;
		second = max;
	}

	for (int i = first; i <= second; i++) {
		if (i % 3 == 0) {
			count++;
		}
	}

	return count;

}

int main() {
	// 정수값 두개를 인자값으로 전달받고
	// 매개변수로 전달된 두개의 정수값의 범위에 3의 배수가
	// 몇개 있는지 리턴하는 함수를 만드세요.
	// 예) int count = func(10, 1000);

	int count = 0;
	int min = 10;
	int max = 100;

	count = Solution(min, max);
	printf("%d\n", count);

	// 강사님 풀이

	count = GetThreeTimesCount(min, max);
	printf("%d ~ %d 까지의 정수의 범위에서 3의 배수의 갯수는: %d\n", min, max, count);

	count = GetThreeTimesCount(max, min);
	printf("%d ~ %d 까지의 정수의 범위에서 3의 배수의 갯수는: %d\n", min, max, count);

	return 0;
}