#include <stdio.h>


int Solution(int left, int right)
{
	int sum = 0;

	for (int i = left; i <= right; i++)
	{
		if (i % 3 == 0)
		{
			++sum;
		}
	}

	return sum;
}

// ����� Ǯ��

// �Լ����� �Լ��� ����̳� ��Ȱ�� �ǹ��ϴ� �ܾ ������
// ����ϴ� ���� �����ϴ�.
// �Ű������� �޴� ���� �ǹ̸� ��Ÿ���� �����̳� �ܾ ����Ͻô� ���� �����ϴ�.
int GetThreeTimesCount(int min, int max) {
	int first = 0;
	int second = 0;
	int count = 0;

	if (min > max) {
		first = max;
		second = min;
	}
	else {
		first = min;
		second = max;
	}

	for (int i = first; i <= second; i++) {
		if (i % 3 == 0) {
			count++;
		}
	}

	return count;

}

int main() {
	// ������ �ΰ��� ���ڰ����� ���޹ް�
	// �Ű������� ���޵� �ΰ��� �������� ������ 3�� �����
	// � �ִ��� �����ϴ� �Լ��� ���弼��.
	// ��) int count = func(10, 1000);

	int count = 0;
	int min = 10;
	int max = 100;

	count = Solution(min, max);
	printf("%d\n", count);

	// ����� Ǯ��

	count = GetThreeTimesCount(min, max);
	printf("%d ~ %d ������ ������ �������� 3�� ����� ������: %d\n", min, max, count);

	count = GetThreeTimesCount(max, min);
	printf("%d ~ %d ������ ������ �������� 3�� ����� ������: %d\n", min, max, count);

	return 0;
}