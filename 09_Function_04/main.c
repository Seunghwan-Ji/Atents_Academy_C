#include <stdio.h>

int RetBigger(int number1, int number2)
{
	return number1 > number2 ? number1 : number2;
}


int main()
{
	int number1 = 0;
	int number2 = 0;

	printf("2���� �������� �Է��ϼ���.(10 20): ");
	scanf_s("%d %d", &number1, &number2);

	// �ΰ��� �������� �Է¹޾Ƽ� �Է� ���� �ΰ��� ���� �߿� 
	// ū���� �����ϴ� �Լ��� �����
	// ���� �Լ��� ����ؼ� �Է¹��� �� ���� ū���� ����غ�����.

	printf("%d\n", RetBigger(number1, number2));


	return 0;
}