#include <stdio.h>

// void* (���̵��� ������)
// ���� ������.
// ���� ���� �������� ���� �ּҰ�

int main() {
	void* varray[3];

	int a = 1000;
	float b = 3.4f;
	double c = 100.4;

	varray[0] = &a;
	varray[1] = &b;
	varray[2] = &c;

	printf("array[0] = %d, array[1] = %f, array[2] = &lf\n",
		*(int*)varray[0], *(float*)varray[1], *(double*)varray[2]);

	return 0;
}