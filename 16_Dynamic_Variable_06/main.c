#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>

// 구조체 변수 동적 할당

typedef struct tagMonster {
	char name[30];
	int health;
	int attack;
	int defense;
} Monster;


int main() {
	// 몬스터의 입력 갯수를 입력받아서 필요한 용량의 동적메모리를 할당하고
	// 몬스터의 데이타를 입력한 후에 출력해보세요..
	int count = 0;   // 갯수 입력받을 변수
	char namebuff[30];   // 이름을 입력받을 문자배열
	int health = 0;      // 생명력 입력받을 변수
	int attack = 0;      // 공격력 입력받을 변수
	int defense = 0;   // 방어력 입력받을 변수

	printf("몇마리의 몬스터를 입력하시겠습니까.? ");
	scanf_s("%d", &count);

	Monster** monsterArray = (Monster**)malloc(sizeof(Monster*) * count);

	for (int i = 0; i < count; i++)
	{
		monsterArray[i] = (Monster*)malloc(sizeof(Monster) * 1);

		printf("%d번째 몬스터 이름 입력: ", i + 1);
		scanf_s("%s", namebuff, sizeof(namebuff));
		strcpy_s(monsterArray[i]->name, strlen(namebuff) + 1, namebuff);

		printf("%d번째 몬스터 생명력 입력: ", i + 1);
		scanf_s("%d", &health);
		monsterArray[i]->health = health;

		printf("%d번째 몬스터 공격력 입력: ", i + 1);
		scanf_s("%d", &attack);
		monsterArray[i]->attack = attack;

		printf("%d번째 몬스터 방어력 입력: ", i + 1);
		scanf_s("%d", &defense);
		monsterArray[i]->defense = defense;
	}

	for (int i = 0; i < count; i++)
	{
		printf("\n\n");
		printf("이름: %s\n생명력: %d\n공격력: %d\n방어력: %d\n",
			monsterArray[i]->name, monsterArray[i]->health, monsterArray[i]->attack, monsterArray[i]->defense);
	}

	// 포인터 배열 안 요소 메모리 해제
	for (int i = 0; i < count; i++)
	{
		free(monsterArray[i]);
	}

	// 포인터 배열 자체 메모리 해제
	free(monsterArray);

	

	// 다른 풀이

	Monster* pmons = (Monster*)malloc(sizeof(Monster) * count);   // count 갯수만큼 동적메모리 할당

	for (int i = 0; i < count; i++) {
		printf("%d번째 몬스터의 이름을 입력하세요: ", i + 1);
		//scanf_s("%s", namebuff, sizeof(namebuff));   // 이름을 입력받음.
		scanf_s("%s", pmons[i].name, 30);
		//strcpy_s(pmons[i].name, 30, namebuff);

		printf("%d번째 몬스터의 생명력을 입력하세요: ", i + 1);
		scanf_s("%d", &pmons[i].health);

		printf("%d번째 몬스터의 공격력을 입력하세요: ", i + 1);
		scanf_s("%d", &pmons[i].attack);

		printf("%d번째 몬스터의 방어력을 입력하세요: ", i + 1);
		scanf_s("%d", &pmons[i].defense);
	}


	for (int i = 0; i < count; i++) {
		printf("%d번째 몬스터의 이름: %s, 생명력: %d, 공격력: %d, 방어력: %d\n",
			i + 1, pmons[i].name, pmons[i].health, pmons[i].attack, pmons[i].defense);
	}

	free(pmons);


	return 0;
}