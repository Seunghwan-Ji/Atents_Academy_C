#include <stdio.h>

int main() {
	int array[10];

	int* parray = array;

	for (int i = 0; i < 10; i++) {
		array[i] = i;	// �迭��
		*(array + i) = i;	// �����ͽ�
	}

	for (int i = 0; i < 10; i++) {
		printf("address: %d, array[%d] = %d, \n", parray, i, *parray++);		
	}

	printf("\n\n");

	unsigned char* temp = (unsigned char*)array;

	for (int i = 0; i < 10; i++) {
		printf("array[%d] = %d\n", i, *((int*)(temp + i * 4)));
	}


	return 0;
}