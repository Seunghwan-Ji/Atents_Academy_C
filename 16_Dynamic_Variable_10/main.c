#include <stdio.h>
// 포인터 배열

int main() {
    char fruitArray[4][10] = { "Apple", "Banana", "PineApple", "Mango" };   // Rectangle 배열

    char* pfruit1 = "Apple";
    char* pfruit2 = "Banana";
    char* pfruit3 = "PineApple";
    char* pfruit4 = "Mango";

    // 포인터 배열
    char** ppfruitArray[] = { pfruit1, pfruit2, pfruit3, pfruit4 };   // Ragged 배열



    printf("---- Ragged 배열 -----\n");
    int length = sizeof(ppfruitArray) / sizeof(ppfruitArray[0]);
    for (int i = 0; i < length; i++) {
        printf("%s\n", ppfruitArray[i]);
    }

    printf("\n------ Rectangle 배열 -------\n");
    for (int i = 0; i < 4; i++) {
        printf("fruitArray[%d] = %s\n", i, fruitArray[i]);
    }



    return 0;
}