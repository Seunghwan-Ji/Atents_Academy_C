#include <stdio.h>

int main() {
	int i = 2000;
	int j = 3000;
	int k = 4000;

	int limitValue = 0;

	int exit = 0;

	printf("�������� �Է��ϼ���: ");
	scanf_s("%d", &limitValue);

	while (i > 0) {	// 3�� while��
		i -= 10;
		while (j > 0) {
			j -= 10;
			while (k > 0) {
				k -= 10;
				printf("i = %d, j = %d, k = %d\n", i, j, k);

				unsigned int sum = i * j * k;

				if (sum < limitValue) {
					printf("sum = %d, limitValue = %d\n", sum, limitValue);
					exit = 1;
					break;	// �ݺ����� Ż���Ҷ� ���
							// break���� ���� ��ġ���� ���� ����� 
							// �ݺ����� Ż���Ѵ�.
				}
			}

			if (exit == 1) {
				break;
			}
		}

		if (exit == 1) {
			break;
		}
	}

	// goto���� ���
	while (i > 0) {
		i -= 10;
		while (j > 0) {
			j -= 10;
			while (k > 0) {
				k -= 10;
				printf("i = %d, j = %d, k = %d\n", i, j, k);

				unsigned int sum = i * j * k;

				if (sum < limitValue) {
					printf("sum = %d, limitValue = %d\n", sum, limitValue);

					goto LoopExit;
					// ��ø�Ǿ��ִ� �ݺ����� �ѹ��� Ż���Ҷ� goto���� ����ϸ�
					// �ڵ带 �����ϰ� ó�� �� �� �ֽ��ϴ�.
				}

			}
		}
	}

LoopExit:	// ���̺�




	return 0;
}