#include <stdio.h>

int main() {
	// 0 ~ 99���� �����ϼ���..
	int a0 = 0;
	int a1 = 1;
	// ...
	int a98 = 98;
	int a99 = 99;

	// ����Ǿ��ִ� ���߿��� ¦���� ����غ�����..
	if (a0 % 2 == 0) {
		printf("a0 = %d¦���Դϴ�.\n", a0);
	}

	if (a1 % 2 == 0) {
		printf("a1 = %d¦���Դϴ�.\n", a0);
	}

	// ...
	if (a98 % 2 == 0) {
		printf("a98 = %d¦���Դϴ�.\n", a0);
	}

	if (a99 % 2 == 0) {
		printf("a99 = %d¦���Դϴ�.\n", a0);
	}

	// ������ DataType�� ������ ������ �ʿ��Ҷ� 
	// ����� �� �ִ� ���� ����� �ֽ��ϴ�.
	// �̰��� �迭(Array)�̶�� �մϴ�.

	// DataType �迭��[�迭����� ����];
	// �迭���� �迭�� �Ҵ�� �޸𸮰����� ���ι��� �ּҰ��Դϴ�.
	// �迭���� �ּһ������մϴ�.

	int array[100];

	printf("array = %p\n", array);

	//array = 2;

	for (int i = 0; i < 100; i++) {
		array[i] = i;
	}

	for (int i = 0; i < 100; i++) {
		if (array[i] % 2 == 0) {
			printf("array[%d] = %d �� ¦���Դϴ�.\n", i, array[i]);
		}
	}

	return 0;
}