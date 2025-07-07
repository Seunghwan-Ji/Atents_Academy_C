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

    fp = fopen("Student.bin", "wb");   // 바이너리 쓰기모드 파일 열기

    if (fp == NULL) {
        printf("FILE OPEN ERROR\n");

        return 0;
    }

    for (int i = 0; i < count; i++) {
        printf("학생 정보를 입력하세요 (나이 학년 이름 순) : ");
        scanf("%d %d %s", &inputValue.age, &inputValue.grade, inputValue.name);

        fwrite(&inputValue, sizeof(Student), 1, fp);   // 바이너리 쓰기
    }

    fclose(fp);

    fp = fopen("Student.bin", "rb");

    if (fp == NULL) {
        printf("FILE OPEN ERROR\n");

        return 0;
    }

    fseek(fp, 0, SEEK_END);   // 파일 읽기 포인터를 파일의 끝으로 이동
    size = ftell(fp);   // 파일 끝의 byte 위치를 가져온다. (파일 사이즈)

    fseek(fp, 0, SEEK_SET);   // 파일 읽기 포인터를 파일의 처음으로 이동

    Student* stdata = (Student*)malloc(size);   // 읽은 파일 내용을 저장할 동적 메모리 할당

    int length = size / sizeof(Student);
    fread(stdata, sizeof(Student), length, fp);

    for (int i = 0; i < count; i++) {
        printf("stdata.age = %d, grade = %d, name = %s\n",
            stdata[i].age, stdata[i].grade, stdata[i].name);
    }

    fclose(fp);

    free(stdata);   // 동적메모리 반환

    return 0;

}