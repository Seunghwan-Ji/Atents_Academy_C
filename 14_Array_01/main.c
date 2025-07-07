#include <stdio.h>
// 이차원 배열

int main() {
    int array[5][5];   // 2차원 배열

    // 2차원배열 array의 DataType은 뭘까요? int (*)[5]

    int(*parray)[5];


    parray = array;
    printf("parray = %d\n", parray);

    parray = parray + 1; // 몇번지 일까요?
    printf("parray + 1 = %d\n", parray);

    array[1][1] = 100;   // 배열식

    *(*(array + 1) + 1) = 100;   // 포인터식


    array[2][3] = 400;

    *(*(array + 2) + 3) = 400;



    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            array[i][j] = i * 5 + j;   // 배열식

        }
    }


    printf("이차원배열\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("array[%d][%d] = %d\n", i, j, array[i][j]);
        }
    }

    printf("\n");
    printf("일차원 배열\n");
    int* parray1 = (int*)array;   // int(*)[5] -> int* 형변환

    for (int i = 0; i < 25; i++) {
        printf("parray1[%d] = %d\n", i, parray1[i]);
    }


    return 0;
}