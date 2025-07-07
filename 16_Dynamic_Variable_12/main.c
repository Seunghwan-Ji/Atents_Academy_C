#include <stdio.h>

// 함수 포인터
float add(int a, int b) {
    return  a + b;
}

float sub(int a, int b) {
    return a - b;
}

float mul(int a, int b) {
    return a * b;
}


float div(int a, int b) {
    return a / (float)b;
}

float calculator(float(*pfunc)(int, int), int a, int b) {
    return pfunc(a, b);
}

int main() {
    int a = 20;
    int b = 30;

    char oper = 0;
    float fret = 0;

    printf("연산 방법을 입력하세요(+, -, x,/): ");
    scanf_s("%c", &oper);

    switch (oper) {
    case '+':
        fret = calculator(add, a, b);
        printf("%d + %d = %f\n", a, b, fret);
        break;

    case '-':
        fret = calculator(sub, a, b);
        printf("%d - %d = %f\n", a, b, fret);

        break;

    case 'x':
        fret = calculator(mul, a, b);
        printf("%d x %d = %f\n", a, b, fret);

        break;

    case '/':
        fret = calculator(&div, a, b);
        printf("%d / %d = %f\n", a, b, fret);

        break;

    default:
        printf("연산 기호를 잘못 입력하셨습니다.\n");
        break;
    }

    return 0;
}