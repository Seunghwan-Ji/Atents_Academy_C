#include <stdio.h>

// �ڵ������� �ּҰ��� �Լ��� �ܺη� �����ؼ� ����Ͻø� �ȵ˴ϴ�.
// ���޹��� �ּҰ����� �޸𸮰����� ������ ���� ������
// �޸𸮰����� ���� �����ȴٰ� ������ �� �����ϴ�.(�ٸ� �Լ��� ���)

int* SetScore(int value)
{
	int sum = 0; // ���ú���, �ڵ�����

	sum += value;

	return &sum; // �ڵ������� �ּҰ��� ������.
}

// ���������� �ּҰ��� �Լ��ܺη� �����ؼ� ����ϴ� ���� ��ȿ�մϴ�.
// ���������� �޸𸮰����� ���α׷� �����ֱ� ���� �ٸ� �Լ��� ������� �ʰ�
// ���� �˴ϴ�.

int* PSetScore(int value)
{
	static int sum = 0; // ���ú���, ��������

	sum += value;

	return &sum; // �ڵ������� �ּҰ��� ������.
}

int main()
{
	printf("\nSetScore\n");
	int* pa = SetScore(100);

	printf("*pa = %d\n", *pa);
	printf("*pa = %d\n", *pa);
	printf("*pa = %d\n", *pa);

	printf("\nPSetScore\n");
	pa = PSetScore(100);
	printf("*pa = %d\n", *pa);
	printf("*pa = %d\n", *pa);
	printf("*pa = %d\n", *pa);

	return 0;
}