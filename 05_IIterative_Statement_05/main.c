#include <stdio.h>

int main() {
	// ������ 2�� ~ 9�ܱ��� ����غ�����.
	// ��� ���� 
	// 2 x 1 = 2
	// 2 x 2 = 4

	for (int i = 2; i <= 9; i++) {
		printf("-- %d�� --\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}

	printf("\n\n");

	for (int i = 0; i <= 7; i++) {
		printf("-- %d�� --\n", i + 2);
		for (int j = 0; j <= 8; j++) {
			printf("%d x %d = %d\n", i + 2, j + 1, (i + 2) * (j + 1));
		}

		printf("\n");
	}

	return 0;
}