#define _CRT_SECURE_NO_WARNINGS // ���� ���� ���� ����� �����Ͽ��� ��û(scanf �Լ�)
                                // scanf_s �Լ��� �ش� �ȵ�.
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
    Student stArray[] = { // ����ü �迭
       {"������", 1, 3},
       {"����", 2, 11},
       {"ȣ����", 2, 8},
       {"�ڳ���", 3, 7},
       {"ħ����", 3, 5},
       {"�Ҵ�", 1, 12}
    };

    // �̸��� �Է� �ް� ���� �迭���� �Է¹��� �̸��� �ش��ϴ�
    // ����Ÿ�� ã�� �ش� �̸��� �л��� �г�� ���� ����ϴ� 
    // ���α׷��� ���弼��.
    char cInputName[30];
    int length = sizeof(stArray) / sizeof(stArray[0]);

    while (1)
    {
        printf("�̸� �Է�: ");
        scanf_s("%s", cInputName, sizeof(cInputName));
        // sizeof ���� �����ϴ� ����: �迭 ������� ũ�� �Է��ϴ� ���� ���� ����.

        Student* searchName = SearchName(stArray, length, cInputName);

        if (searchName)
        {
            printf("�̸�: %s, �г�: %d, ��: %d\n", searchName->name, searchName->grade, searchName->classNum);
        }
        else
        {
            printf("ã�� �̸��� �����ϴ�.\n");
        }
    }

    return 0;
}