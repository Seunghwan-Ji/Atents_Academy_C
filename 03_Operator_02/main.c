#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// % ������ ������
// ������ ���� ������ �������� ���鶧 ���.

int main()
{
	srand(time(NULL)); // ������ �ð����� ����(����) ���尪(�ʱⰪ)�� ����.

	int randValue = rand(); // ������ �߻� 0 ~ 32767
	int directValue = randValue % 4; // 0: Up, 1: Down, 2: Left, 3: Right

	printf("randValue = %d, directValue = %d\n", randValue, directValue);

	for (int i = 0; i < 10; i++)
	{
		randValue = rand();
		directValue = randValue % 4;
		printf("randValue = %d, directValue = %d\n\n", randValue, directValue);
	}
}