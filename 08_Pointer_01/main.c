#include <stdio.h>

// ������


int main() {
	int a;

	a = 20;

	printf("&a = %p\n", &a); // & : �ּҿ�����, ������տ� ���, ����� ������ �Ҵ��
	// �޸� ������ �ּҰ��� �����ݴϴ�.

// C������ �޸𸮰����� �ּҰ��� �ٷ�� DataType�� ������ �ֽ��ϴ�.
// �� DataType�� ��������(Pointer Type) �̶�� �մϴ�. (�����ʹ� ��򰡸� ����Ų�ٴ� �ǹ��Դϴ�.)
// ���������� �޸𸮰����� ��򰡸� ����Ű�� �޸��ּҸ� �����ϴ� DataType�Դϴ�.

	int* pa; // int* (int�� ������)
	pa = &a;

	int** ppa; // int** (int�� �����Ϳ� ������)
	ppa = &pa;

	int*** pppa; // ������ �����Ҷ� ���̴� *(asterisk)�� ������ ��������
	pppa = &ppa;


	***pppa; // �ּҰ� �տ� ���̴� *(asterisk)�� ������ ������.
	***&ppa;
	**ppa;
	**&pa;
	*pa;
	*&a;

	printf("&***pppa = %p\n&***&ppa = %p\n&**ppa = %p\n&**&pa = %p\n&*pa = %p\n&*&a = %p\n\n",
		&***pppa, &***&ppa, &**ppa, &**&pa, &*pa, &*&a, &a);

	printf("**pppa = %d\n***&ppa = %d\n**ppa = %d\n**&pa = %d\n*pa = %d\n*&a = %d",
		***pppa, ***&ppa, **ppa, **&pa, *pa, *&a);

	printf("\n\n");
	***pppa = 4000;
	printf("**pppa = %d\n***&ppa = %d\n**ppa = %d\n**&pa = %d\n*pa = %d\n*&a = %d",
		***pppa, ***&ppa, **ppa, **&pa, *pa, *&a);






	return 0;
}