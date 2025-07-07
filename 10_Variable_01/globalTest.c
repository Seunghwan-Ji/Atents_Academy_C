#include <stdio.h>

//extern int global;   // global이라는 변수가 외부에 있어라는 정보를 제공
               // main.c파일에 정의된 외부변수 global에 globalTest.c 파일에서 접근됨.


static int global2 = 0;

// 전역변수에 접근하는 경우
// 직접적인 접근은 막고
// 함수를 통해서 접근하도록 제한하는 것이 좋습니다..
void SetGlobal2(int value) {
    if (value > 2000) {
        printf("value = %d\n", value);
    }
    else {
        global2 = value;
    }

}

int GetGlobal2() {
    return global2;
}


void PrintGlobal2() {
    printf("PrintGlobal2() global2 = %d\n", global2);
}