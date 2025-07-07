#include <stdio.h>

int main()
{
	int TRUE = -2000;
	int FALSE = 0;

	int ret = 0;

	printf("논리 AND 연산자\n");
	ret = TRUE && TRUE;
	printf("TRUE && TRUE = %d\n", ret);

	ret = TRUE && FALSE;
	printf("TRUE && FALSE = %d\n", ret);

	ret = FALSE && TRUE;
	printf("FALSE && TRUE = %d\n", ret);

	ret = FALSE && FALSE;
	printf("FALSE && FALSE = %d\n", ret);

	printf("\n논리 OR 연산자\n");
	ret = TRUE || TRUE;
	printf("TRUE || TRUE = %d\n", ret);

	ret = TRUE || FALSE;
	printf("TRUE || FALSE = %d\n", ret);

	ret = FALSE || TRUE;
	printf("FALSE || TRUE = %d\n", ret);

	ret = FALSE || FALSE;
	printf("FALSE || FALSE = %d\n", ret);

	printf("\n논리 Not 연산자\n");
	ret = !TRUE;
	printf("!TRUE = %d\n", ret);

	ret = !FALSE;
	printf("!FALSE = %d\n", ret);
	
	printf("\n\n");
	int i = 0;

	// 논리 &&(AND)연산자는 거짓일 확률이 높은 것을 앞쪽에 배치하는 것이 유리하다.
	(i) && (i = i + 1);
	printf("i = %d\n", i);

	i = 1;

	// 논리 ||(OR)연산자는 참일 확률이 높은 것을 앞쪽에 배치하는 것이 유리하다.
	(i) || (i = i + 1);
	printf("i = %d\n", i);

	return 0;
}