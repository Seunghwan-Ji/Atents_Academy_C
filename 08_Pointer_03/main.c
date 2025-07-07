#include <stdio.h>

int main() {
	int a = 20;
	int b = 30;

	int* pa = &a;
	int* pb = &b;
	
	int** ppa = &pa;
	int** ppb = &pb;

	// 1. ���� pa�� pb�� ���� �ٲ㼭
	// **ppa�� ���� b�� **ppb�� ���� a�� ����Ű���� �غ�����..

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


	// 2. ���� ppa�� ���� ppb�� ���� �ٲ㼭
	// **ppa�� ���� b�� **ppb�� ���� a�� ����Ű���� �غ�����...

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