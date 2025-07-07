#include <stdio.h>
#include <stdlib.h> // malloc 함수 호출용도.

// 동적메모리..

// 변수의 종류
// 변수는 선언된 위치나 사용된 키워드에 따라서 변수의 성격이 다릅니다.

int global = 0;   // 외부변수, 전역변수

int main() {
    int local = 0;   // 로컬변수, 자동변수

    static int vari = 0;   // 로컬변수, 정적변수

    // 동적변수
    // 실행중에 메모리공간이 필요할때 동적 메모리 공간(Heap)을 사용합니다.
    // 동적메모리 공간은 OS(운영체제)가 관리 합니다.
    // 동적메모리 공간이 필요할때 OS에게 요청하여 동적메모리 공간을 할당 받습니다.
    // C언어에서는 malloc, calloc, realloc 함수를 사용하여 할당요청을 합니다.
    // 동적메모리공간은 할당 받았으면 반드시 반납처리를 해야 합니다.

    int count = 0;
    printf("저장하실 정수의 갯수를 입력하세요: ");
    scanf_s("%d", &count);

    int* parray = (int*)malloc(sizeof(int) * count); // 동적메모리공간을 할당.
    // malloc 함수의 리턴타입은 void 이기때문에 형변환이 필요하다.

    for (int i = 0; i < count; i++) {
        parray[i] = i;
        //*(parray + i) = i;
    }

    for (int i = 0; i < count; i++) {
        printf("parray[%d] = %d\n", i, parray[i]);
    }

    printf("\n\nint 형 저장공간을 double형 저장공간으로 변경\n");

    double* pfarray = (double*)parray;

    for (int i = 0; i < count / 2; i++) {
        pfarray[i] = i * 3.123;   // double 형값을 저장
    }

    for (int i = 0; i < count / 2; i++) {
        printf("pfarray[%d] = %lf\n", i, pfarray[i]);
    }

    free(parray);   // 동적메모리 공간 반납처리(반드시 동적메모리 공간을 반납처리 해야 함)



    return 0;
}