#include <stdio.h>
#include <stdlib.h>

typedef struct tagMonster {
    char name[30];
    int health;
    int attack;
    int defense;

    struct tagMonster* Next;
} Monster;

// ��ũ�� ����Ʈ


int main() {
    int isInput = 1;

    Monster* pHead = NULL; // ������� �ּҰ�
    Monster* pTail = NULL;   // ��������� �ּҰ�

    int count = 0;

    while (1) {
        printf("������ ������ �Է��Ͻðڽ��ϱ�? (0: no, 1: yes) : ");
        scanf_s("%d", &isInput);

        if (!isInput) {
            printf("�Է��� ��Ĩ�ϴ�.!!\n");
            break;   // while�� Ż��
        }

        if (pHead == NULL) {
            pHead = (Monster*)malloc(sizeof(Monster));
            pTail = pHead;
            pTail->Next = NULL;
        }
        else {
            pTail->Next = (Monster*)malloc(sizeof(Monster));
            pTail = pTail->Next;
            pTail->Next = NULL;
        }

        printf("%d��° ������ �̸��� �Է��ϼ���: ", count + 1);
        scanf_s("%s", &pTail->name, 30);   // �̸��� �Է¹���
        printf("%d��° ������ ������� �Է��ϼ���: ", count + 1);
        scanf_s("%d", &pTail->health);
        printf("%d��° ������ ���ݷ��� �Է��ϼ���: ", count + 1);
        scanf_s("%d", &pTail->attack);
        printf("%d��° ������ ������ �Է��ϼ���: ", count + 1);
        scanf_s("%d", &pTail->defense);

        count++;
        printf("\n\n");
    }

    Monster* Current = NULL;
    Current = pHead;

    int i = 0;
    while (Current != NULL) {
        printf("%d��° ����\n�̸�: %s\n�����: %d\n���ݷ�: %d\n����: %d\n\n",
            i + 1, Current->name, Current->health, Current->attack, Current->defense);

        i++;

        Current = Current->Next;
    }


    // ���� �޸� ��ȯ ó��
    Current = pHead;
    while (pHead != NULL) {
        Current = pHead;
        pHead = Current->Next;

        free(Current);
    }


    return 0;
}