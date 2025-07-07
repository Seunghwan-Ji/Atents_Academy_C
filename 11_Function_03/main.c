#include <stdio.h>

typedef struct tagRet {
	int addvalue;
	int subvalue;
	int mulvalue;
	float divvalue;
} Ret;

// ���ϰ��� ������ �޾ƾ� �Ҷ�

// ����ü�� ���ϰ��� �޴� ���
Ret Calculate(int a, int b) {
	Ret ret;

	ret.addvalue = a + b;
	ret.subvalue = a - b;
	ret.mulvalue = a * b;
	ret.divvalue = a / (float)b;

	return ret;
}

// �����͸� �̿��� ���
void PCalculate(int a, int b, int* pAddValue, int* pSubValue, int* pMulValue, float* pDivValue) {
	*pAddValue = a + b;
	*pSubValue = a - b;
	*pMulValue = a * b;
	*pDivValue = a / (float)b;
}

void PCalculate2(Ret* ret2, int a, int b)
{
	(*ret2).addvalue = a + b;
	(*ret2).subvalue = a - b;
	(*ret2).mulvalue = a * b;
	(*ret2).divvalue = a / (float)b;

	// ���� ���� ����
	/*ret2->addvalue = a + b;
	ret2->subvalue = a - b;
	ret2->mulvalue = a * b;
	ret2->divvalue = a / (float)b;*/
}


int main() {
	int a = 20;
	int b = 30;

	// ����, ����, ����, �������� ���� �ѹ��� ���� �ް� ����.
	Ret ret = Calculate(a, b);

	printf("����ü �̿�\n");
	printf("%d + %d = %d\n", a, b, ret.addvalue);
	printf("%d - %d = %d\n", a, b, ret.subvalue);
	printf("%d x %d = %d\n", a, b, ret.mulvalue);
	printf("%d / %d = %f\n", a, b, ret.divvalue);


	printf("\n������ �̿�\n");
	int addValue = 0;
	int subValue = 0;
	int mulValue = 0;
	float divValue = 0.0f;

	PCalculate(a, b, &addValue, &subValue, &mulValue, &divValue);

	printf("%d + %d = %d\n", a, b, addValue);
	printf("%d - %d = %d\n", a, b, subValue);
	printf("%d x %d = %d\n", a, b, mulValue);
	printf("%d / %d = %f\n", a, b, divValue);


	// ���� 1. struct tagRet ����ü������ �ּҰ��� ���ڷ� �����ؼ� ����, ����, ����, �������� �������
	// �����ϴ� �Լ��� ����� ������� ����غ�����.
	Ret ret2;
	PCalculate2(&ret2, a, b);
	printf("\n\n");
	printf("%d + %d = %d\n", a, b, ret2.addvalue);
	printf("%d - %d = %d\n", a, b, ret2.subvalue);
	printf("%d x %d = %d\n", a, b, ret2.mulvalue);
	printf("%d / %d = %f\n", a, b, ret2.divvalue);

	return 0;
}