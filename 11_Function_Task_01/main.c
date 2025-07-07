#include <stdio.h>

void ChangeValue(int* value1, int* value2)
{
	int temp = *value1;

	*value1 = *value2;
	*value2 = temp;
}

int main() {
	int a = 20;
	int b = 30;

	int* pa = &a;
	int* pb = &b;

	// pa������ pb������ �ּҰ��� �����ؼ�
	// �����Լ��� a������ b������ ���� ���� �ٲٴ� �Լ��� �����
	// �Լ��� ������ �Ŀ� a������ ���� b������ ���� ����غ�����...

	printf("before Swap a = %d, b = %d\n", a, b);

	// �Լ�ȣ��
	ChangeValue(&pa, &pb);


	printf("After Swap a = %d, b = %d\n", a, b);

	return 0;
}