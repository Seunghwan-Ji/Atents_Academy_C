#include <stdio.h>


int main() {
	int isLeg = 0;
	int isHand = 0;
	int isHead = 0;
	int isThink = 0;
	int is2eyes = 0;
	int isGugudan = 0;


	printf("�ٸ��� 2�� �ֽ��ϱ�?(����: 0, ��: 1) ");
	scanf_s("%d", &isLeg);
	printf("���� 2�� �ֽ��ϴٱ�?(����: 0, ��: 1) ");
	scanf_s("%d", &isHand);
	printf("�Ӹ��� �ֽ��ϱ�?(����: 0, ��: 1) ");
	scanf_s("%d", &isHead);
	printf("������ �մϱ�?(����: 0, ��: 1)  ");
	scanf_s("%d", &isThink);
	printf("���� 2�� �ֽ��ϱ�?(����: 0, ��: 1) ");
	scanf_s("%d", &is2eyes);
	printf("�������� �ܿ� �� �ֽ��ϱ�? (����: 0, ��: 1) ");
	scanf_s("%d", &isGugudan);

	// �������� ó��
	int isHuman = isLeg && isHand && isHead && isThink && is2eyes && isGugudan;

	if (isHuman) {
		printf("�ΰ��Դϴ�.\n");
	}
	else {
		printf("�ΰ����� �ָ��մϴ�.\n");
	}


	// ���������� ó��
	int checkCount = isLeg + isHand + isHead + isThink + is2eyes + isGugudan;

	printf("checkCount = %d\n", checkCount);

	if (checkCount >= 6) { // 6
		printf("�ΰ��� Ȯ���մϴ�.\n");
	}
	else if (checkCount > 3 && checkCount < 6) { // 4, 5
		printf("�ΰ��ϲ� �����ϴ�.\n");
	}
	else if (checkCount > 1 && checkCount <= 3) { // 2, 3
		printf("�ΰ��ϲ���� Ȯ���� ���� �ʽ��ϴ�.\n");
	}
	else {
		printf("�ΰ��� �ƴϰ� ���¿� �������ϴ�.\n");
	}

	// ���� if-else-if���� Switch-case ������ ����� ������.


	return 0;
}