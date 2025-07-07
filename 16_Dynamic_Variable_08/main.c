#include <stdio.h>
#include <stdlib.h>

// �������� ���� �������迭
int main() {
    int column = 0;
    int row = 0;

    printf("���� ���� �Է��ϼ���: ");
    scanf_s("%d", &column);
    printf("���� ���� �Է��ϼ���: ");
    scanf_s("%d", &row);

    // int* �迭�� ����
    int** pparray = (int**)malloc(sizeof(int*) * column);

    for (int i = 0; i < column; i++) {
        pparray[i] = (int*)malloc(sizeof(int) * row);   // int �迭�� ���� ����
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

    // �������� ������ �迭�� ���� ó��
    for (int i = 0; i < column; i++) {
        free(pparray[i]);
    }

    free(pparray);


    return 0;
}