#include <stdio.h>

int main()
{
	int TRUE = -2000;
	int FALSE = 0;

	int ret = 0;

	printf("�� AND ������\n");
	ret = TRUE && TRUE;
	printf("TRUE && TRUE = %d\n", ret);

	ret = TRUE && FALSE;
	printf("TRUE && FALSE = %d\n", ret);

	ret = FALSE && TRUE;
	printf("FALSE && TRUE = %d\n", ret);

	ret = FALSE && FALSE;
	printf("FALSE && FALSE = %d\n", ret);

	printf("\n�� OR ������\n");
	ret = TRUE || TRUE;
	printf("TRUE || TRUE = %d\n", ret);

	ret = TRUE || FALSE;
	printf("TRUE || FALSE = %d\n", ret);

	ret = FALSE || TRUE;
	printf("FALSE || TRUE = %d\n", ret);

	ret = FALSE || FALSE;
	printf("FALSE || FALSE = %d\n", ret);

	printf("\n�� Not ������\n");
	ret = !TRUE;
	printf("!TRUE = %d\n", ret);

	ret = !FALSE;
	printf("!FALSE = %d\n", ret);
	
	printf("\n\n");
	int i = 0;

	// �� &&(AND)�����ڴ� ������ Ȯ���� ���� ���� ���ʿ� ��ġ�ϴ� ���� �����ϴ�.
	(i) && (i = i + 1);
	printf("i = %d\n", i);

	i = 1;

	// �� ||(OR)�����ڴ� ���� Ȯ���� ���� ���� ���ʿ� ��ġ�ϴ� ���� �����ϴ�.
	(i) || (i = i + 1);
	printf("i = %d\n", i);

	return 0;
}