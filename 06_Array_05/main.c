#include <stdio.h>

int main() {	

	// 1. �������� 9���� �迭�� ����� �����ϰ� �迭�� ����� ���� 
	// ����غ�����.
	printf("1������\n");

	int GudanArray[9];

	for (int i = 0; i < 9; i++) {
		GudanArray[i] = 9 * (i + 1);
	}	

	for (int i = 0; i < 9; i++) {
		printf("9 x %d = %d\n", i + 1, GudanArray[i]);
	}

	/*
	for (int i = 1; i <= 9; i++) {
		GudanArray[i - 1] = 9 * i;
	}

	for (int i = 1; i <= 9; i++) {
		printf("9 x %d = %d\n", i, GudanArray[i - 1]);
	}
	*/


	printf("\n2������\n");
	// 2. �������� 2�� ~ 9�ܱ��� �迭�� �����ϰ� �迭�� ����� ����
	// ����غ�����..
	int GugudanArray[72];

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			GugudanArray[i * 9 + j] = (i + 2) * (j + 1);
		}
	}

	printf("\n");
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			printf("%d x %d = %d\n", i + 2, j + 1, GugudanArray[i * 9 + j]);
		}
		printf("\n");
	}


	printf("\n3������\n");
	// 3. �������� 2�� ���� 9�ܱ��� �����ϰ�
	// �ܼ��� �Է¹޾Ƽ� �迭�� ����� �ܼ��� ����غ�����...

	int dansu = 0;
	printf("�ܼ��� �Է��ϼ���(2~ 9): ");
	scanf_s("%d", &dansu);

	if (dansu < 2 || dansu > 9) {
		printf("�ܼ��� �߸��Է��ϼ̽��ϴ�.\n");
	}
	else {
		printf("-- %d���� ����մϴ�. --", dansu);
		for (int i = 0; i < 9; i++) {
			printf("%d x %d = %d\n", dansu, i + 1, GugudanArray[(dansu - 2) * 9 + i]);
		}
	}




	return 0;
}