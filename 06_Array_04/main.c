#include <stdio.h>

int main() {
	// �迭�� �����ϸ鼭 �ʱⰪ�� �ο��� �� �ֽ��ϴ�.
	// �ʱⰪ�� �ο��� ��쿡�� �迭����� ������ ������ �� �ֽ��ϴ�.
	double dArray[] = { 3.4, 4.5, 7.8, 1.3, 12.34, 18.6, 2.2, 11.11, 13.45, 15.6, 18.9, 10.2 };

	// �迭����� ���� = �迭�� ��ü ����Ʈ�� / �迭 ����� ����Ʈ��
	int length = sizeof(dArray) / sizeof(dArray[0]);

	for (int i = 0; i < length; i++) {
		printf("dArray[%d] = %lf\n", i, dArray[i]);
	}

	printf("\n\n");
	dArray[5] = 123.456;

	for (int i = 0; i < length; i++) {
		printf("dArray[%d] = %lf\n", i, dArray[i]);
	}




	return 0;
}