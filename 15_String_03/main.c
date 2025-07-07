#define _CRT_SECURE_NO_WARNINGS // 보안 에러 내지 말라고 컴파일에게 요청(scanf 함수)
                                // scanf_s 함수는 해당 안됨.
#include <stdio.h>
#include <string.h>

typedef struct tagStudent {
    char name[30];
    int grade;
    int classNum;
} Student;

Student* SearchName(Student parray[], int length, char name[])
{
    for (int i = 0; i < length; i++)
    {
        if (strcmp(name, parray[i].name) == 0)
        {
            return &parray[i];
        }
    }

    return NULL;
}

int main() {
    Student stArray[] = { // 구조체 배열
       {"원숭이", 1, 3},
       {"사자", 2, 11},
       {"호랑이", 2, 8},
       {"코끼리", 3, 7},
       {"침팬지", 3, 5},
       {"팬더", 1, 12}
    };

    // 이름을 입력 받고 위의 배열에서 입력받은 이름에 해당하는
    // 데이타를 찾고 해당 이름의 학생의 학년과 반을 출력하는 
    // 프로그램을 만드세요.
    char cInputName[30];
    int length = sizeof(stArray) / sizeof(stArray[0]);

    while (1)
    {
        printf("이름 입력: ");
        scanf_s("%s", cInputName, sizeof(cInputName));
        // sizeof 값을 전달하는 이유: 배열 사이즈보다 크게 입력하는 것을 방지 목적.

        Student* searchName = SearchName(stArray, length, cInputName);

        if (searchName)
        {
            printf("이름: %s, 학년: %d, 반: %d\n", searchName->name, searchName->grade, searchName->classNum);
        }
        else
        {
            printf("찾는 이름이 없습니다.\n");
        }
    }

    return 0;
}