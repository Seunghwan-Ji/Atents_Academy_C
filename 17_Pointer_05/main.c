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

int main() {
    int a = 20;
    int b = 30;

    char oper = 0;
    float fret = 0;
    int operNum = 0;

    char operArray[] = { '+', '-', 'x', '/' };

    float(*operfuncArray[4])(int, int);   // 함수 포인터 배열

    operfuncArray[0] = add;
    operfuncArray[1] = sub;
    operfuncArray[2] = mul;
    operfuncArray[3] = div;

    printf("연산 방법을 입력하세요(+, -, x, /): ");
    scanf_s("%c", &oper);

    operNum = -1;
    for (int i = 0; i < 4; i++) {
        if (operArray[i] == oper) {
            operNum = i;

            break;
        }
    }

    if (operNum != -1) {
        printf("%d %c %d = %f\n", a, operArray[operNum], b, operfuncArray[operNum](a, b));

    }
    else {
        printf("연산기호를 잘못 입력하셨습니다. \n");
    }

    // 함수를 배열에 넣고 일괄적으로 처리
    printf("\n\n일괄 연산 처리\n");
    for (int i = 0; i < 4; i++) {
        printf("%d %c %d = %f\n", a, operArray[i], b, operfuncArray[i](a, b));
    }

    return 0;
}