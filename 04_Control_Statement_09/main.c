#include <stdio.h>

// ������ �б�
// goto


// �����Լ�
int main() {
	int inputValue = 0;

Start: //   ���̺� ���α׷� �ڵ� ��ġ
	printf("�������� �Է��ϼ���(exit: -1): ");
	scanf_s("%d", &inputValue);

	if (inputValue != -1) {
		printf("�Էµ� ���� %d�Դϴ�. �ٽ� �����մϴ�.\n", inputValue);
		goto Start;	
	}

	printf("�Էµ� ���� %d�Դϴ�.  ���α׷��� �����մϴ�.\n", inputValue);
	goto Exit; // 


	printf("���� ��¾ȵ�\n");

Exit:
	printf("���α׷��� ����\n");


	return 0;
}