#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int count = 0;
	char** strArray;
	char inputString[100];

	printf("�Է¹��� ���ڿ��� ������ �Է��ϼ���: ");
	scanf_s("%d", &count);

	// �Է¹��� ������ŭ ���ڿ��� �Է¹޴� ���α׷��� ���弼��.

	strArray = (char**)malloc(sizeof(char*) * count); // ���ڿ����� ������ �迭.

	for (int i = 0; i < count; i++)
	{
		printf("%d��° ���ڿ� �Է�: ", i + 1);
		scanf_s("%s", inputString, sizeof(inputString)); // ���ڿ� �Է¹���.

		int iStrLen = strlen(inputString); // ���ڿ��� ���̸� ���Ѵ�.
		strArray[i] = (char*)malloc(sizeof(char) * (iStrLen + 1)); // ���ڿ��� ������ �����迭�� �Ҵ����.
		strcpy_s(strArray[i], iStrLen + 1, inputString); // �Է¹��� ���ڿ��� �Ҵ���� �����迭�� �����Ѵ�.
	}

	printf("\n�Է��� ���ڿ�\n");
	for (int i = 0; i < count; i++) {
		printf("%s\n", strArray[i]);
	}

	// �Ҵ���� �����迭�� �ݳ�ó��
	// ���ڿ��� ������ �����迭 �ݳ�ó��
	for (int i = 0; i < count; i++) {
		free(strArray[i]);
	}

	// ���ڿ��� �ּҰ� �����ϴ� �����迭 �ݳ�ó��.
	free(strArray);


	return 0;
}