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
    // 함수도 DataType으로 받아드립니다.
    // 함수형
    // 명령어를 저장하는 DataType입니다.
    // 함수도 메모리 공간에 위치합니다.
    // 메모리에 저장되어있는 이진수가 명령어라는 의미입니다.

    int a = 20;
    int b = 30;


    printf("add = %p\n", add);

    float(*pfunc)(int, int); // 함수 포인터형 변수
    // 리턴타입은 float , 매개변수로 int값 2개를 취하는 함수의
    // 주소값을 저장하는 변수 pfunc


    pfunc = add;

    printf("add = %p, pfunc = %p\n", add, pfunc);

    float fret = pfunc(a, b);   // pfunc변수로 pfunc변수가 저장하고 있는 함수를 호출

    printf("%d + %d = %f\n", a, b, fret);

    pfunc = &sub; // & 기호를 안 붙여도 되지만 명시적으로 사용하는게 좋음.

    fret = pfunc(a, b);
    printf("%d - %d = %f\n", a, b, fret);

    pfunc = &mul;

    fret = pfunc(a, b);
    printf("%d x %d = %f\n", a, b, fret);

    pfunc = &div;
    fret = pfunc(a, b);
    printf("%d / %d = %f\n", a, b, fret);




    return 0;
}