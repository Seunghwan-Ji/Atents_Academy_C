#include <stdio.h>
#include <stdlib.h>

int main() {

    int count = 0;
    int input = 0;

    printf("입력하실 문자의 갯수를 입력하세요: ");
    scanf_s("%d", &count);

    char* pstr = (char*)malloc(sizeof(char) * count + 1); // 동적메모리 공간 할당

    int i = 0;
    for (i = 0; i < count; i++) {
        printf("%d번째 문자를 입력하세요: ", 1 + i);
        scanf_s("%*c%c", &input);
        pstr[i] = input;
    }

    pstr[i] = '\0';

    printf("입력하신 문자열은 %s입니다.\n", pstr);

    free(pstr);   // 동적메모리 할당 해제.



    return 0;
}