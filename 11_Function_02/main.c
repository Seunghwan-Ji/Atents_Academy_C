#include <stdio.h>

struct  Array
{
	int array[100];
};

// 배열을 인자로 전달할때 배열을 값 자체로 전달 하는 방법은 없습니다.
// 구조체 안에 배열을 넣어서 전달하면 배열을 값 자체로 전달할 수는 있습니다.
// 배열자체를 인자값으로 전달하는 것은 바람직하지 않습니다.
// 단순히 배열의 값만 참조하려고 하는건데 배열자체를 값으로 전달하는 방식은 
// 비효율적입니다.
// 배열을 전달할때는 배열의 선두번지 주소을 전달하는 것이 바람직합니다.

// 주소값을 인자로 전달하는 것에 대한 위험성.


// 전달되는 인자의 주소값에 const 키워드를 붙이면
// 전달받은 주소값에 할당된 메모리공간의 값이 변경되는 것을 방지 할 수 있습니다.

// void PrintArray(int parray[], int size)
void PrintArray(const int* parray, int size)
{
	// parray[1] = 1000;
	for (int i = 0; i < size; i++)
	{
		printf("parray[%d] = %d\n", i, parray[i]);
	}
}

int main()
{
	int array[100];

	for (int i = 0; i < 100; i++)
	{
		array[i] = i;
	}

	PrintArray(array, 100);

	// const 키워드
	int a = 100;
	int b = 200;

	// 변수의 저장공간과 주소값 모두 상수화
	int const* const pa = &a;

	// &pa = 400; 주소 접근 불가

	// pa = &b; 변수의 값 변경 불가

	return 0;
}