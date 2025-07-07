#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 구조체 변수 동적 할당

typedef struct tagMonster {
    char name[30];
    int health;
    int attack;
    int defense;
} Monster;

void InputMonster(Monster* pdata, char* name, int health, int attack, int defense) {
    strcpy_s(pdata->name, strlen(name) + 1, name);
    pdata->health = health;
    pdata->attack = attack;
    pdata->defense = defense;
}

void PrintMonster(Monster* pmons) {
    printf("이름: %s\n생명력: %d\n공격력: %d\n방어력: %d\n",
        pmons->name, pmons->health, pmons->attack, pmons->defense);
}

int main() {
    Monster* pmons = (Monster*)malloc(sizeof(Monster) * 1); // Monster 1마리 저장공간을 동적 할당

    InputMonster(pmons, "Dragon", 100, 50, 20);

    PrintMonster(pmons);

    free(pmons);   // 동적 메모리 할당을 해제.

    return 0;
}