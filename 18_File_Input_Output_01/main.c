#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 파일 입출력

int main() {
    FILE* fp;

    fp = fopen("test.txt", "w");   //  파일을 쓰기 모드로 오픈

    if (fp == NULL) {
        printf("파일열기 실패\n");
        return 0;
    }
    else {
        printf("파일열기 성공\n");
    }

    fputc('a', fp);   // 한문자 파일에 쓰기
    fputc('b', fp);

    for (int i = 'A'; i <= 'Z'; i++) {
        fputc(i, fp);
    }

    fclose(fp);   // 파일 닫기

    fp = fopen("test.txt", "r");   // 읽기모드로 파일 오픈
    if (fp == NULL) {
        printf("파일 열기 실패\n");
        return 0;;
    }

    char c = 0;
    while ((c = fgetc(fp)) != EOF) {   // 파일에서 한문자씩 읽어서 콘솔창에 출력
        putchar(c);   // 한문자씩 출력
    }

    fclose(fp); // 파일 닫기

    return 0;
}