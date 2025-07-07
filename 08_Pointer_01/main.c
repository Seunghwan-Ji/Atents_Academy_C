#include <stdio.h>

// 포인터


int main() {
	int a;

	a = 20;

	printf("&a = %p\n", &a); // & : 주소연산자, 변수명앞에 사용, 실행시 변수가 할당된
	// 메모리 공간의 주소값을 돌려줍니다.

// C언어에서는 메모리공간의 주소값을 다루는 DataType을 가지고 있습니다.
// 그 DataType을 포인터형(Pointer Type) 이라고 합니다. (포인터는 어딘가를 가리킨다는 의미입니다.)
// 포인터형은 메모리공간상에 어딘가를 가리키는 메모리주소를 저장하는 DataType입니다.

	int* pa; // int* (int형 포인터)
	pa = &a;

	int** ppa; // int** (int형 포인터에 포인터)
	ppa = &pa;

	int*** pppa; // 변수를 정의할때 붙이는 *(asterisk)는 포인터 형지정자
	pppa = &ppa;


	***pppa; // 주소값 앞에 붙이는 *(asterisk)는 포인터 연산자.
	***&ppa;
	**ppa;
	**&pa;
	*pa;
	*&a;

	printf("&***pppa = %p\n&***&ppa = %p\n&**ppa = %p\n&**&pa = %p\n&*pa = %p\n&*&a = %p\n\n",
		&***pppa, &***&ppa, &**ppa, &**&pa, &*pa, &*&a, &a);

	printf("**pppa = %d\n***&ppa = %d\n**ppa = %d\n**&pa = %d\n*pa = %d\n*&a = %d",
		***pppa, ***&ppa, **ppa, **&pa, *pa, *&a);

	printf("\n\n");
	***pppa = 4000;
	printf("**pppa = %d\n***&ppa = %d\n**ppa = %d\n**&pa = %d\n*pa = %d\n*&a = %d",
		***pppa, ***&ppa, **ppa, **&pa, *pa, *&a);






	return 0;
}