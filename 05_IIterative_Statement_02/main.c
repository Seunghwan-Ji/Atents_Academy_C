#include <stdio.h>

int main() {
	// while, do-while

	int loopCount = 0;

	printf("\nwhile��\n");
	printf("�������� �Է��ϼ���: ");
	scanf_s("%d", &loopCount);

	// �ݺ�Ƚ���� ������ ���ǽ��� 
	// �����ϴ� ���ȿ��� �󸶵��� ��ɾ �ݺ��ص� �Ǵ� ���
	// while(���ǽ�){
	//   �ݺ��� ��ɾ��;
	//}

	while (loopCount > 0) {
		loopCount -= 10;

		printf("loopCount = %d\n", loopCount);
	}

	printf("\ndo -while��\n");
	printf("�������� �Է��ϼ���: ");
	scanf_s("%d", &loopCount);

	do {
		loopCount -= 10;

		printf("loopCount = %d\n", loopCount);
			
	} while (loopCount > 0);


	return 0;
}