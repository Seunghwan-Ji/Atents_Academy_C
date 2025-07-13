#include <stdio.h>

int main() {
	// ��Ʈ ������
	unsigned char a = 2;  // 00000010
	unsigned char b = 3;  // 00000011
	unsigned char c = 0;  // 00000000

	// ��Ʈ And(&)
	// ��Ʈ Or(|)
	// ��Ʈ not(~)
	// eXclusive or(��Ÿ��Or) (^)
	// << ���� shift
	// >> ������ shift

	c = a & b; // �� �� 1�̾�� 1.
	//			a:  00000010
	//			b:  00000011
	//      a & b:  00000010
	printf("c = %d\n", c);

	c = a | b; // �� �� �ϳ��� 1�̸� 1.
	//          a:  00000010
	//          b:  00000011
	//      a | b:  00000011
	printf("c = %d\n", c);

	c = ~a; // ��Ʈ ����.
	//          a:  00000010
	//         ~a:  11111101
	printf("c = %d\n", c);

	c = a ^ b; // ������ 0, �ٸ��� 1 (��Ʈ�� �ٸ� �κ��� �̾Ƴ���.)
	//          a:  00000010
	//          b:  00000011
	//      a ^ b:  00000001
	printf("c = %d\n", c);


	return 0;
}