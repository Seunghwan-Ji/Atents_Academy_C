#include <stdio.h>

int main() {
    int array[5][5][5];   // 3차원 배열

    int(*parray)[5][5];
    parray = array;

    int(*parray2)[5];
    parray2 = *array;

    int* parray3;
    parray3 = **array;// parray2;

    printf("array = %d\n", array);
    printf("*array = %d\n", *array);
    printf("**array = %d\n", **array);

    printf("array + 1 = %d\n", array + 1);
    printf("*array + 1 = %d\n", *array + 1);
    printf("**array + 1 = %d\n", **array + 1);



    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 5; k++) {
                parray[i][j][k] = i * 5 * 5 + j * 5 + k;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 5; k++) {
                printf("parray[%d][%d][%d] = %d\n", i, j, k, parray[i][j][k]);
            }
        }
    }


    return 0;
}