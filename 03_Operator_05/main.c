#include <stdio.h>

// scanf_s�� Ű���忡�� ���������� ���� �Է¹޴� �Լ��̴�.
// %d: ������
// %f: �Ǽ���
// %c: ���ڰ�
// %s: ���ڿ�

int main()
{
	int isLeg = 0;
	int isHand = 0;
	int isHead = 0;
	int isThink = 0;
	int is2Eyes = 0;
	int isGugudan = 0;

	printf("�ٸ��� 2�� �ֽ��ϱ�?(����: 0, ��: 1)");
	scanf_s("%d", &isLeg);

	printf("���� 2�� �ֽ��ϱ�?(����: 0, ��: 1)");
	scanf_s("%d", &isHand);

	printf("�Ӹ��� �ֽ��ϱ�?(����: 0, ��: 1)");
	scanf_s("%d", &isHead);

	printf("������ �մϱ�?(����: 0, ��: 1)");
	scanf_s("%d", &isThink);

	printf("���� 2�� �ֽ��ϱ�?(����: 0, ��: 1)");
	scanf_s("%d", &is2Eyes);

	printf("�������� �ܿ� �� �ֽ��ϱ�?(����: 0, ��: 1)");
	scanf_s("%d", &isGugudan);

	int isHuman = isLeg && isHand && isHead && isThink && is2Eyes && isGugudan;

	if (isHuman)
	{
		printf("�ΰ� �Դϴ�.\n");
	}
	else
	{
		printf("�ΰ��� �ƴմϴ�.\n");
	}

	return 0;
}