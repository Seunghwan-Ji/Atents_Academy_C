#include <stdio.h>

// 함수의 인자 전달방식
// 1. call by value (값에 의한 호출)
// 2. call by address (주소값에 의한 호출)

void Swap(int left, int right)
{ // call by value
	int temp = 0;

	temp = left;
	left = right;
	right = temp;
}

void PSwap(int* pleft, int* pright)
{ // call by address
	int temp = 0;

	temp = *pleft;
	*pleft = *pright;
	*pright = temp;
}

int main()
{
	int left = 20;
	int right = 30;

	Swap(left, right);
	printf("Swap(left, right) left = %d, right = %d\n", left, right);

	PSwap(&left, &right);
	printf("PSwap(left, right) left = %d, right = %d\n", left, right);

	return 0;
}