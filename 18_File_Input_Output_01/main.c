#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���� �����

int main() {
    FILE* fp;

    fp = fopen("test.txt", "w");   //  ������ ���� ���� ����

    if (fp == NULL) {
        printf("���Ͽ��� ����\n");
        return 0;
    }
    else {
        printf("���Ͽ��� ����\n");
    }

    fputc('a', fp);   // �ѹ��� ���Ͽ� ����
    fputc('b', fp);

    for (int i = 'A'; i <= 'Z'; i++) {
        fputc(i, fp);
    }

    fclose(fp);   // ���� �ݱ�

    fp = fopen("test.txt", "r");   // �б���� ���� ����
    if (fp == NULL) {
        printf("���� ���� ����\n");
        return 0;;
    }

    char c = 0;
    while ((c = fgetc(fp)) != EOF) {   // ���Ͽ��� �ѹ��ھ� �о �ܼ�â�� ���
        putchar(c);   // �ѹ��ھ� ���
    }

    fclose(fp); // ���� �ݱ�

    return 0;
}