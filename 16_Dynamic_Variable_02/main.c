#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 10;
    printf("저장할 정수의 갯수를 입력하세요: ");
    scanf_s("%d", &count);

    // malloc은 동적메모리 할당 후 메모리 공간을 초기화 하지 않는다.
    int* parray = (int*)malloc(sizeof(int) * count);   // 동적메모리 할당

    printf("\nmalloc으로 동적메모리 생성\n");
    // 초기화가 되지 않아 쓰레기 값이 출력됨
    for (int i = 0; i < count; i++) {
        printf("parray[%d] = %d\n", i, parray[i]);
    }

    free(parray);   // 동적메모리 공간 반환

    // calloc은 동적메모리 할당 후 메모리 공간을 초기화한다.
    parray = (int*)calloc(count, sizeof(int));   // 동적메모리 할당

    printf("\n\ncalloc으로 동적메모리 생성\n");
    for (int i = 0; i < count; i++) {
        printf("parray[%d] = %d\n", i, parray[i]);
    }

    printf("\n\nrealloc으로 동적메모리 재할당\n");

    // realloc은 기할당된 메모리의 공간을 재할당할때 사용한다.
    // 재할당하면서 기존의 메모리에 있던 값을 재할당된 메모리에 복사한다.
    parray = realloc(parray, sizeof(int) * count * 2); // 동적메모리 재할당

    for (int i = 0; i < count * 2; i++) {
        printf("parray[%d] = %d\n", i, parray[i]);
    }

    free(parray);   // 동적 메모리 반환


    return 0;
}