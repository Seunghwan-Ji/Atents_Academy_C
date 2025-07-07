#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct tagStudent {
    int age;
    int grade;
    char name[20];
} Student;

int main() {
    FILE* fp;
    int count = 3;
    int size = 0;

    Student inputValue;

    fp = fopen("Student.bin", "wb");   // ���̳ʸ� ������ ���� ����

    if (fp == NULL) {
        printf("FILE OPEN ERROR\n");

        return 0;
    }

    for (int i = 0; i < count; i++) {
        printf("�л� ������ �Է��ϼ��� (���� �г� �̸� ��) : ");
        scanf("%d %d %s", &inputValue.age, &inputValue.grade, inputValue.name);

        fwrite(&inputValue, sizeof(Student), 1, fp);   // ���̳ʸ� ����
    }

    fclose(fp);

    fp = fopen("Student.bin", "rb");

    if (fp == NULL) {
        printf("FILE OPEN ERROR\n");

        return 0;
    }

    fseek(fp, 0, SEEK_END);   // ���� �б� �����͸� ������ ������ �̵�
    size = ftell(fp);   // ���� ���� byte ��ġ�� �����´�. (���� ������)

    fseek(fp, 0, SEEK_SET);   // ���� �б� �����͸� ������ ó������ �̵�

    Student* stdata = (Student*)malloc(size);   // ���� ���� ������ ������ ���� �޸� �Ҵ�

    int length = size / sizeof(Student);
    fread(stdata, sizeof(Student), length, fp);

    for (int i = 0; i < count; i++) {
        printf("stdata.age = %d, grade = %d, name = %s\n",
            stdata[i].age, stdata[i].grade, stdata[i].name);
    }

    fclose(fp);

    free(stdata);   // �����޸� ��ȯ

    return 0;

}