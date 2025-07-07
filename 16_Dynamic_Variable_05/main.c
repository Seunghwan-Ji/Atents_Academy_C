#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ����ü ���� ���� �Ҵ�

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
    printf("�̸�: %s\n�����: %d\n���ݷ�: %d\n����: %d\n",
        pmons->name, pmons->health, pmons->attack, pmons->defense);
}

int main() {
    Monster* pmons = (Monster*)malloc(sizeof(Monster) * 1); // Monster 1���� ��������� ���� �Ҵ�

    InputMonster(pmons, "Dragon", 100, 50, 20);

    PrintMonster(pmons);

    free(pmons);   // ���� �޸� �Ҵ��� ����.

    return 0;
}