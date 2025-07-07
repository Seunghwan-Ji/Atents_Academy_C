#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int array[] = { 10, 20, 30, 40, 50 };
    int outputArray[5];
    FILE* fp;

    int size, count;

    fp = fopen("binary.bin", "wb");   // ���̳ʸ� ��� ���Ͼ���� ���� ����

    if (fp == NULL) {
        printf("���� ���� ����\n");

        return 0;
    }

    size = sizeof(int);
    count = sizeof(array) / sizeof(int);

    fwrite(array, size, count, fp);   // ���̳ʸ� ���� ���� ����
    fclose(fp);

    fp = fopen("binary.bin", "rb");   // ���̳ʸ� ��� ���� �б���� ���� ����

    if (fp == NULL) {
        printf("���� ���� ����\n");
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