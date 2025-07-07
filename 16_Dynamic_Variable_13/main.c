#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void BubbleSort(int DataSet[], int Length, int (*comp)(int, int))
{
    int i = 0;
    int j = 0;
    int temp = 0;

    for (i = 0; i < Length - 1; i++)
    {
        //Complete = 0;

        for (j = 0; j < Length - (i + 1); j++)
        {
            //if (DataSet[j] > DataSet[j + 1])
            if (comp(DataSet[j], DataSet[j + 1]))
            {
                temp = DataSet[j + 1];
                DataSet[j + 1] = DataSet[j];
                DataSet[j] = temp;
            }
        }
    }
}

int DecendingCompare(int left, int right) {
    if (left > right) {
        return 1;
    }
    else {
        return 0;
    }
}

int AcendingCompare(int left, int right) {
    if (left < right) {
        return 1;
    }
    else {
        return 0;
    }
}


int main() {
    srand(time(NULL));   // 난수 씨드값 생성

    int sortType = -1;
    int array[100] = { 0, };

    for (int i = 0; i < 100; i++) {
        array[i] = rand();   // 난수 발생
    }

    int length = sizeof(array) / sizeof(array[0]);

    //   BubbleSort(array, length);

    for (int i = 0; i < length; i++) {
        printf("%d, ", array[i]);
    }


    printf("내림차순(1), 오름차순(0)을 입력하세요: ");
    scanf_s("%d", &sortType);

    if (sortType == 1) {
        BubbleSort(array, length, DecendingCompare);
    }
    else {
        BubbleSort(array, length, AcendingCompare);
    }


    for (int i = 0; i < length; i++) {
        printf("%d, ", array[i]);
    }


    return 0;
}