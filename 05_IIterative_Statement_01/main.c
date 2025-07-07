#include <stdio.h>

// �ݺ���
// for, while, do-while(���󵵰� �����ϴ�.)

int main() {
	// for���� �ݺ�Ƚ���� �ƴ� ��쿡 ����ϱ� ���� ������ �Ǿ� �ֽ��ϴ�.
	// 
	// for(�ʱ��; ���ǽ�; ������){
	//			�ݺ��� ��ɾ��;
	// }
	for (int i = 0; i < 10; i++) {
		printf("i = %d\n", i);
	}


	/*
	for (;;) { // �ʱ��, ���ǽ�, ������ ����

	}

	for (int i = 0; ;) { // ���ǽ�, ������ ����

	}

	int i = 0;
	for (; i < 10; ) { // �ʱ�� , ������ ����
	}
	*/

	printf("\n\n");
	printf("���� for��\n");
	for (int i = 0; i < 10; i += 2) {
		printf("i = %d\n", i);
	}


	printf("\n���� for��\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("i = %d, j = %d\n", i, j);
		}
	}

	printf("\n���� for��\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				printf("i = %d, j = %d, k = %d\n", i, j, k);
			}
		}
	}

	for (float a = 0.0f; a < 100.0f; a += 1.2f) {
		printf("a = %f\n", a);
	}

	for (int i = 0, j = 10; i < 10 && j > 0; i++, j--) {
		printf("i = %d, j = %d\n", i, j);
	}


	return 0;
}