#include <stdio.h>

// ������(Pointer)

int main() {
	int a;
	a = 20;

	int* pa = &a;

	// ���� pa �� ����� ���� �����ϴ� ���� pb�� �����
	// ���� pb�� ���� a�� ���� 1000���� �����ϰ� ����� ���� a�� 
	// ���� ����غ�����..
	int* pb;
	pb = pa;

	*pb = 1000;

	printf("a = %d\n", a);



	return 0;
}