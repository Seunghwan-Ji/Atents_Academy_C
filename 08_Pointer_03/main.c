#include <stdio.h>

int main() {
	int a = 20;
	int b = 30;

	int* pa = &a;
	int* pb = &b;
	
	int** ppa = &pa;
	int** ppb = &pb;

	// 1. 변수 pa와 pb의 값을 바꿔서
	// **ppa가 변수 b를 **ppb가 변수 a를 가리키도록 해보세요..

	printf("before **ppa = %d, **ppb = %d\n", **ppa, **ppb);
	/*
	int* temp = NULL;
	temp = pa;
	pa = pb;
	pb = temp;
	*/


	pa = (int)pa ^ (int)pb;
	pb = (int)pa ^ (int)pb;
	pa = (int)pa ^ (int)pb;

	printf("after **ppa = %d, **ppb = %d\n", **ppa, **ppb);


	// 2. 변수 ppa와 변수 ppb의 값을 바꿔서
	// **ppa가 변수 b를 **ppb가 변수 a를 가리키도록 해보세요...

	printf("before **ppa = %d, **ppb = %d\n", **ppa, **ppb);
	/*
	int** temp2 = NULL;
	temp2 = ppa;
	ppa = ppb;
	ppb = temp2;
	*/

	ppa = (int)ppa ^ (int)ppb;
	ppb = (int)ppa ^ (int)ppb;
	ppa = (int)ppa ^ (int)ppb;

	printf("after **ppa = %d, **ppb = %d\n", **ppa, **ppb);


	return 0;
}