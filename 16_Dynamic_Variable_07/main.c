#include <stdio.h>
#include <stdlib.h>

typedef struct tagMonster {
    char name[30];
    int health;
    int attack;
    int defense;

    struct tagMonster* Next;
} Monster;

// 링크드 리스트


int main() {
    int isInput = 1;

    Monster* pHead = NULL; // 헤드노드의 주소값
    Monster* pTail = NULL;   // 꼬리노드의 주소값

    int count = 0;

    while (1) {
        printf("몬스터의 정보를 입력하시겠습니까? (0: no, 1: yes) : ");
        scanf_s("%d", &isInput);

        if (!isInput) {
            printf("입력을 마칩니다.!!\n");
            break;   // while문 탈출
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

        printf("%d번째 몬스터의 이름을 입력하세요: ", count + 1);
        scanf_s("%s", &pTail->name, 30);   // 이름을 입력받음
        printf("%d번째 몬스터의 생명력을 입력하세요: ", count + 1);
        scanf_s("%d", &pTail->health);
        printf("%d번째 몬스터의 공격력을 입력하세요: ", count + 1);
        scanf_s("%d", &pTail->attack);
        printf("%d번째 몬스터의 방어력을 입력하세요: ", count + 1);
        scanf_s("%d", &pTail->defense);

        count++;
        printf("\n\n");
    }

    Monster* Current = NULL;
    Current = pHead;

    int i = 0;
    while (Current != NULL) {
        printf("%d번째 몬스터\n이름: %s\n생명력: %d\n공격력: %d\n방어력: %d\n\n",
            i + 1, Current->name, Current->health, Current->attack, Current->defense);

        i++;

        Current = Current->Next;
    }


    // 동적 메모리 반환 처리
    Current = pHead;
    while (pHead != NULL) {
        Current = pHead;
        pHead = Current->Next;

        free(Current);
    }


    return 0;
}