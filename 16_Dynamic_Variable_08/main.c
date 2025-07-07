#include <stdio.h>
#include <stdlib.h>

// 동적으로 만든 이차원배열
int main() {
    int column = 0;
    int row = 0;

    printf("행의 값을 입력하세요: ");
    scanf_s("%d", &column);
    printf("열의 값을 입력하세요: ");
    scanf_s("%d", &row);

    // int* 배열을 생성
    int** pparray = (int**)malloc(sizeof(int*) * column);

    for (int i = 0; i < column; i++) {
        pparray[i] = (int*)malloc(sizeof(int) * row);   // int 배열을 동적 생성
    }


    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            pparray[i][j] = i * row + j;
        }
    }

    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            printf("pparray[%d][%d] = %d\n", i, j, pparray[i][j]);
        }
    }

    // 동적으로 생성된 배열을 제거 처리
    for (int i = 0; i < column; i++) {
        free(pparray[i]);
    }

    free(pparray);


    return 0;
}