#include <stdio.h>

typedef struct tagStudent {
	int age;
	int grade;
} Student;

int main() {
	short shortArray[10]; // 배열명은 첫번째요소의 주소값, 주소상수
	int intArray[10];
	double doubleArray[10];
	Student studentArray[10];

	short* pshortArray = shortArray; // DataType?
	int* pintArray = intArray;
	double* pdoubleArray = doubleArray;
	Student* pstudentArray = studentArray;

	pshortArray + 1;

	// 주소값에 +, -을 하는 의미는?
	// 주소값이 가리키는 공간의 사이즈만큼 
	// short* + 1 => 2byte만큼 증가
	// int* + 1 => 4byte만큼 증가
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