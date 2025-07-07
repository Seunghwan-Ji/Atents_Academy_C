#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <memory.h>
#include <string.h>


int main() {
    FILE* fp;
    char file_buff[100];

    fp = fopen("test_line.txt", "w");

    if (fp == NULL) {
        printf("���� ���� ����\n");
        return 0;
    }

    int i = 0;

    for (i = 0; i < 3; i++) {
        printf("%d��° ���� ������ �Է��ϼ���: ", i + 1);
        memset(file_buff, 0, sizeof(file_buff));
        scanf("%s", file_buff);
        file_buff[strlen(file_buff)] = '\n';
        fputs(file_buff, fp);   // ���Ͽ� ���ڿ��� ����.
    }

    fclose(fp);
    printf("\n\n");

    fp = fopen("test_line.txt", "r");   // ������ �б���� ����

    if (fp == NULL) printf("���Ͽ��� ����\n");

    // fgets: ���Ͽ��� �Ѷ��ξ� ����Ÿ�� �д´�. ���� ��� NULL�� ����
    while (fgets(file_buff, sizeof(file_buff), fp) != NULL) {
        printf("%s", file_buff);
        memset(file_buff, 0, sizeof(file_buff));
    }

    fclose(fp);

    return 0;
}