//- C ���� �ǽ� ���ڷ� ��������� -
//���ڷ� ���������
#include <stdio.h>
#include <conio.h>

int main() {
	int count = 10;

	printf("���� �� �簢��\n");
	// �簢��
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			printf("*");
		}
		printf("\n");
	}



	// ���� �� �簢��
	printf("���� �� �簢��\n");

	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			if (i == 0 || j == 0 || i == count - 1 || j == count - 1) {
				printf("*");
			}
			else {
				printf(" "); // ���鹮��
			}
		}
		printf("\n");
	}


	printf("\n\n");
	printf("���� �ﰢ��\n");
	// ���� �ﰢ��


	printf("\n\n");
	printf("�� ���� �ﰢ��\n");
	// �� �����ﰢ��


	printf("\n\n");
	printf("���ﰢ��\n");
	// ���ﰢ��


	printf("\n\n");
	printf("�� ���ﰢ��\n");
	// �����ﰢ��


	printf("\n\n");
	printf("�� �� ���ﰢ��\n");
	// ���� �� ���ﰢ��


	printf("\n\n");
	printf("�� �� �����ﰢ��\n");
	// ���� �� �����ﰢ��



	return 0;
}