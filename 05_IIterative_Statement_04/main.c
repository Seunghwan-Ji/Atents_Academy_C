#include <stdio.h>

int main() {
	// 1. 0 ~ 100������ �����߿��� ¦���� ����ϼ���.
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			printf("i�� ¦���Դϴ�.\n", i);
		}
	}

	printf("\n\n");
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 1) {
			continue; // continue���� �ݺ����ȿ��� ����� �Ǹ�
						// continue���� ����� ��ġ���� �Ʒ��� ���⿡ �ִ� ��ɾ �ǳʶ۶� ����մϴ�.
		}

		printf("%d�� ¦���Դϴ�.\n", i);

	}

	printf("\n\n");
	for (int i = 1; i <= 100; i++) {
		if (i & 1 == 1) { // Ȧ��
			continue;	
		}

		printf("%d�� ¦���Դϴ�.\n", i);
	}

	printf("\n\n");
	for (int i = 1; i <= 100; i++) {
		if (i & 1 == 0) { // ¦��
			printf("%�� ¦���Դϴ�.\n", i);
		}
	}
		


	// 2. 0 ~ 100���� �����߿��� 3�ǹ���̸鼭 2�� ����ΰ͸� ��� �غ�����.
	printf("\n\n");
	for (int i = 1; i <= 100; i++) {
		if ((i % 2 == 0) && (i % 3 == 0)) {
			printf("%d�� 2�� ����̸鼭 3�� ����Դϴ�.\n", i);
		}

	}


	return 0;
}