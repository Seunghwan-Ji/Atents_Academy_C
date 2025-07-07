#include <stdio.h>

typedef struct tagRet {
	int addvalue;
	int subvalue;
	int mulvalue;
	float divvalue;
} Ret;

// 리턴값을 여러개 받아야 할때

// 구조체로 리턴값을 받는 방법
Ret Calculate(int a, int b) {
	Ret ret;

	ret.addvalue = a + b;
	ret.subvalue = a - b;
	ret.mulvalue = a * b;
	ret.divvalue = a / (float)b;

	return ret;
}

// 포인터를 이용한 방법
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

	// 위와 같은 문법
	/*ret2->addvalue = a + b;
	ret2->subvalue = a - b;
	ret2->mulvalue = a * b;
	ret2->divvalue = a / (float)b;*/
}


int main() {
	int a = 20;
	int b = 30;

	// 덧셈, 뺄셈, 곱셈, 나눗셈의 값을 한번에 전달 받고 싶음.
	Ret ret = Calculate(a, b);

	printf("구조체 이용\n");
	printf("%d + %d = %d\n", a, b, ret.addvalue);
	printf("%d - %d = %d\n", a, b, ret.subvalue);
	printf("%d x %d = %d\n", a, b, ret.mulvalue);
	printf("%d / %d = %f\n", a, b, ret.divvalue);


	printf("\n포인터 이용\n");
	int addValue = 0;
	int subValue = 0;
	int mulValue = 0;
	float divValue = 0.0f;

	PCalculate(a, b, &addValue, &subValue, &mulValue, &divValue);

	printf("%d + %d = %d\n", a, b, addValue);
	printf("%d - %d = %d\n", a, b, subValue);
	printf("%d x %d = %d\n", a, b, mulValue);
	printf("%d / %d = %f\n", a, b, divValue);


	// 문제 1. struct tagRet 구조체변수의 주소값을 인자로 전달해서 덧셈, 뺄셈, 곱셈, 나눗셈의 결과값을
	// 전달하는 함수를 만들고 결과값을 출력해보세요.
	Ret ret2;
	PCalculate2(&ret2, a, b);
	printf("\n\n");
	printf("%d + %d = %d\n", a, b, ret2.addvalue);
	printf("%d - %d = %d\n", a, b, ret2.subvalue);
	printf("%d x %d = %d\n", a, b, ret2.mulvalue);
	printf("%d / %d = %f\n", a, b, ret2.divvalue);

	return 0;
}