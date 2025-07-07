#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <memory.h>
#include <string.h>


int main() {
    FILE* fp;
    char file_buff[100];

    fp = fopen("test_line.txt", "w");

    if (fp == NULL) {
        printf("파일 열기 실패\n");
        return 0;
    }

    int i = 0;

    for (i = 0; i < 3; i++) {
        printf("%d번째 라인 내용을 입력하세요: ", i + 1);
        memset(file_buff, 0, sizeof(file_buff));
        scanf("%s", file_buff);
        file_buff[strlen(file_buff)] = '\n';
        fputs(file_buff, fp);   // 파일에 문자열을 쓴다.
    }

    fclose(fp);
    printf("\n\n");

    fp = fopen("test_line.txt", "r");   // 파일을 읽기모드로 열기

    if (fp == NULL) printf("파일열기 실패\n");

    // fgets: 파일에서 한라인씩 데이타를 읽는다. 없는 경우 NULL을 리턴
    while (fgets(file_buff, sizeof(file_buff), fp) != NULL) {
        printf("%s", file_buff);
        memset(file_buff, 0, sizeof(file_buff));
    }

    fclose(fp);

    return 0;
}