#include <stdio.h>
// ������ �迭

int main() {
    int array[5][5];   // 2���� �迭

    // 2�����迭 array�� DataType�� �����? int (*)[5]

    int(*parray)[5];


    parray = array;
    printf("parray = %d\n", parray);

    parray = parray + 1; // ����� �ϱ��?
    printf("parray + 1 = %d\n", parray);

    array[1][1] = 100;   // �迭��

    *(*(array + 1) + 1) = 100;   // �����ͽ�


    array[2][3] = 400;

    *(*(array + 2) + 3) = 400;



    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            array[i][j] = i * 5 + j;   // �迭��

        }
    }


    printf("�������迭\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("array[%d][%d] = %d\n", i, j, array[i][j]);
        }
    }

    printf("\n");
    printf("������ �迭\n");
    int* parray1 = (int*)array;   // int(*)[5] -> int* ����ȯ

    for (int i = 0; i < 25; i++) {
        printf("parray1[%d] = %d\n", i, parray1[i]);
    }


    return 0;
}