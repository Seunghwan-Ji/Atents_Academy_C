#include <stdio.h>
// 변수의 종류
// 접근범위, 존속기간


// 함수를 호출할때 인자값을 받는 매개변수는 로컬변수, 자동변수입니다.
int add(int a, int b) {
    int temp = 0;

    temp = a + b;

    return temp;
}

int SetScore(int value) {
    static int sum = 0; // 로컬변수, 자동변수 -> 정적변수
    // static이 붙은 변수는 정적변수입니다.
    // 접근범위적인 면에서보면 로컬변수입니다.
    // 존속기간적인 면에서보면 sum변수는 정적변수입니다.
    // 정적변수는 자신이 정의된 함수가 호출될때 변수의 공간이 생성
    // 되고 생성된 공간은 프로그램이 종료될때까지 사라지지 않습니다.
    // 정적변수는 프로그램 생명주기내내 유효합니다.

    sum += value;

    return sum;
}

int main() {
    int a = 20;
    int b = 30;

    int ret = add(a, b);

    for (int i = 0; i < 10; i++) {
        SetScore(i);
    }

    ret = SetScore(0);

    printf("SetScore ret = %d\n", ret);






    return 0;
}