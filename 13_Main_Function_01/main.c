#include <stdio.h>

// main함수는 프로그램의 시작위치를 알려주는 역할을 합니다.
// 진입점함수(entry point)라고 합니다.

// main함수의 원형
// 명령행 인자
// int argc <= 전달받은 명령행 문자열의 갯수
// char* argv[] <= 전달받은 문자열의 선두번지 주소값을 저장하는 배열

// int main(int argc, char* argv[]){
//      명령어;
// 
//      return;
// }


int main(int argc, char* argv[]) {   // 진입점함수

    // argv[0]: 프로그램명
    // argv[1]: 입력한 문자열..
    // argv[2]: 입력한 문자열...

    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    getchar();   // 한문자 입력 받는 함수

    // 명령 프롬프트 실행 -> cd C:\Users\user\source\repos\Atents_Academy_C\x64\Debug 입력
    // -> dir 입력 -> 13_Main_Function_01.exe 복사
    // -> 13_Main_Function_01.exe monster01 monster02 monster03 입력
    // 프로그램이 실행되고, 입력한 문자열이 출력되는지 확인한다.

    return 0;
}