#include <stdio.h>

// ����
// ��(x, y)�� �簢�� �ڽ�((0, 0) ~ (10, 10)) ���̿� �ִ��� ��������
// �Ǵ��ϴ� ������ ����� �����غ�����.

int main()
{
	int xValue = 0;
	int yValue = 0;

	printf("x ��ǥ �Է�: ");
	scanf_s("%d", &xValue);

	printf("y ��ǥ �Է�: ");
	scanf_s("%d", &yValue);

	if ((0 < xValue && 0 < yValue) && (10 > xValue && 10 > yValue))
	{
		printf("�簢�� ���ο� �ִ� ���Դϴ�.");
	}
	else
	{
		printf("�簢�� �ܺο� �ִ� ���Դϴ�.");
	}
}