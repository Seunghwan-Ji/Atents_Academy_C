#include <stdio.h>

typedef struct tagStudent {
	int age;
	int grade;
} Student;

int main() {
	short shortArray[10]; // �迭���� ù��°����� �ּҰ�, �ּһ��
	int intArray[10];
	double doubleArray[10];
	Student studentArray[10];

	short* pshortArray = shortArray; // DataType?
	int* pintArray = intArray;
	double* pdoubleArray = doubleArray;
	Student* pstudentArray = studentArray;

	pshortArray + 1;

	// �ּҰ��� +, -�� �ϴ� �ǹ̴�?
	// �ּҰ��� ����Ű�� ������ �����ŭ 
	// short* + 1 => 2byte��ŭ ����
	// int* + 1 => 4byte��ŭ ����
	printf("pshortArray = %d, pshortArray + 1 = %d\n", pshortArray, pshortArray + 1);
	printf("pintArray = %d, pintArray + 1 = %d\n", pintArray, pintArray + 1);
	printf("pdoubleArray = %d, pdoubleArray + 1 = %d\n", pdoubleArray, pdoubleArray + 1);
	printf("pstudentAray = %d, pstudentArray + 1 = %d", pstudentArray, pstudentArray + 1);

	pintArray = (int*)doubleArray;

	for (int i = 0; i < 20; i++) {
		pintArray[i] = i;
	}

	for (int i = 0; i < 20; i++) {
		printf("pintArray[%d] = %d\n", i, pintArray[i]);
	}






	return 0;
}