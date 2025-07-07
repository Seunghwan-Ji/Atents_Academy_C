#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int array[] = { 10, 20, 30, 40, 50 };
    int outputArray[5];
    FILE* fp;

    int size, count;

    fp = fopen("binary.bin", "wb");   // 바이너리 모드 파일쓰기로 파일 오픈

    if (fp == NULL) {
        printf("파일 열기 실패\n");

        return 0;
    }

    size = sizeof(int);
    count = sizeof(array) / sizeof(int);

    fwrite(array, size, count, fp);   // 바이너리 모드로 파일 쓰기
    fclose(fp);

    fp = fopen("binary.bin", "rb");   // 바이너리 모드 파일 읽기모드로 파일 오픈

    if (fp == NULL) {
        printf("파일 열기 실패\n");
    }

    /*
    for (int i = 0; i < count; i++) {
       fread(&outputArray[i], size, 1, fp);
    }
    */

    fread(outputArray, size, count, fp);

    for (int i = 0; i < count; i++) {
        printf("outputArray[%d] = %d\n", i, outputArray[i]);
    }

    fclose(fp);

    return 0;
}