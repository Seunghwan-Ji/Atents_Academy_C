#include <stdio.h>


int MakeEven(int value) {
    if (value & 1) {
        return value + 1;
    }

    return value;
}

int MakeEven2(int value) {
    if (value % 2 == 0) {
        return value;
    }
    else {
        return value + 1;
    }
}

void div(int value1, int base) {
    float divValue = 0.0f;

    if (base == 0) {
        return;   // 함수를 종료할 목적으로 빈 return문을 사용할 수 있습니다.
        // return문을 만나면 함수는 무조건 종료됩니다.
    }

    divValue = value1 / (float)base; // value1 은 자동으로 실수로 변환됨(묵시적 형변환)
                                     // 결과값이 실수가 나올 수 있기 때문에 한 쪽을 float 형으로 변환해줌.

    printf("divValue = %f\n", divValue);
}

int main() {
    // 입력받은 정수값이 짝수면 입력받은 값을 리턴하고
    // 입력받은 정수값이 홀수면 짝수값을 만들어서 리턴하는 함수를 만들고
    // 만든 함수를 이용해서 값을 출력해보세요.
    int value = 0;
    printf("정수값을 입력하세요: ");
    scanf_s("%d", &value);

    int result = MakeEven(value);

    if (value % 2 == 0) {
        printf("value: %d가 짝수여서 변경하지 않음\n", value);
    }
    else {
        printf("value: %d가 홀수여서 짝수값:%d로 변경함\n", value, result);
    }


    return 0;
}