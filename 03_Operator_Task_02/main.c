#include <stdio.h>

// ����
// �ڽ��� ���� ��� ��ǥ�� ���� �ϴ� ��ǥ�� �Է¹ް�
// �Է¹��� �ڽ��� (0, 0) ~ (10, 10) �ڽ��� ���ƴ��� �Ǵ��ϴ� ������
// ���弼��..
// �ڽ��� ���簢���̳� �����簢���̴�...

int main()
{
	// �Է� ���� �ڽ� ����.
	int iTopLeftX = 0;
	int iTopLeftY = 0;
	int iBottomRightX = 0;
	int iBottomRightY = 0;

	printf("�»�� x ��ǥ �Է�: ");
	scanf_s("%d", &iTopLeftX);

	printf("�»�� y ��ǥ �Է�: ");
	scanf_s("%d", &iTopLeftY);

	printf("���ϴ� x ��ǥ �Է�: ");
	scanf_s("%d", &iBottomRightX);

	printf("���ϴ� y ��ǥ �Է�: ");
	scanf_s("%d", &iBottomRightY);

	printf("�»��: (%d, %d), ���ϴ�: (%d, %d)\n", iTopLeftX, iTopLeftY, iBottomRightX, iBottomRightY);

	// �Է� ���� �ڽ��� �ʺ�.
	int iWidth = iBottomRightX - iTopLeftX;

	// ���� �ڽ����� �ʺ� ��.
	int iSumWidth = 10 + iWidth;

	// �� �ڽ��� x�� ����.
	int iDeltaX = 0;

	// ���� ���.
	if (0 <= iTopLeftX)
	{ // ���� �ڽ����� ���ʿ� �ִٰ� �Ǵ�.
		// ���� �ڽ��� �»�� x�� 0 + �Է� ���� �ڽ��� ���ϴ� x��.
		iDeltaX = iBottomRightX;
	}
	else
	{ // �����ʿ� �ִٰ� �Ǵ�.
		// �Է� ���� �ڽ��� �»�� x�� + ���� �ڽ��� ���ϴ� x�� 10.
		iDeltaX = 10 - iTopLeftX;
	}

	// x ���� ���� �ʺ� ���� �� ũ�⸦ ���Ͽ� ��ġ���� �Ǵ�.
	if (iDeltaX < iSumWidth)
	{
		printf("��ġ�� �ڽ�.");
	}
	else
	{
		printf("��ġ�� �ʴ� �ڽ�.");
	}

	return 0;
}