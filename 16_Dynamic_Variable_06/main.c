#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>

// ����ü ���� ���� �Ҵ�

typedef struct tagMonster {
	char name[30];
	int health;
	int attack;
	int defense;
} Monster;


int main() {
	// ������ �Է� ������ �Է¹޾Ƽ� �ʿ��� �뷮�� �����޸𸮸� �Ҵ��ϰ�
	// ������ ����Ÿ�� �Է��� �Ŀ� ����غ�����..
	int count = 0;   // ���� �Է¹��� ����
	char namebuff[30];   // �̸��� �Է¹��� ���ڹ迭
	int health = 0;      // ����� �Է¹��� ����
	int attack = 0;      // ���ݷ� �Է¹��� ����
	int defense = 0;   // ���� �Է¹��� ����

	printf("����� ���͸� �Է��Ͻðڽ��ϱ�.? ");
	scanf_s("%d", &count);

	Monster** monsterArray = (Monster**)malloc(sizeof(Monster*) * count);

	for (int i = 0; i < count; i++)
	{
		monsterArray[i] = (Monster*)malloc(sizeof(Monster) * 1);

		printf("%d��° ���� �̸� �Է�: ", i + 1);
		scanf_s("%s", namebuff, sizeof(namebuff));
		strcpy_s(monsterArray[i]->name, strlen(namebuff) + 1, namebuff);

		printf("%d��° ���� ����� �Է�: ", i + 1);
		scanf_s("%d", &health);
		monsterArray[i]->health = health;

		printf("%d��° ���� ���ݷ� �Է�: ", i + 1);
		scanf_s("%d", &attack);
		monsterArray[i]->attack = attack;

		printf("%d��° ���� ���� �Է�: ", i + 1);
		scanf_s("%d", &defense);
		monsterArray[i]->defense = defense;
	}

	for (int i = 0; i < count; i++)
	{
		printf("\n\n");
		printf("�̸�: %s\n�����: %d\n���ݷ�: %d\n����: %d\n",
			monsterArray[i]->name, monsterArray[i]->health, monsterArray[i]->attack, monsterArray[i]->defense);
	}

	// ������ �迭 �� ��� �޸� ����
	for (int i = 0; i < count; i++)
	{
		free(monsterArray[i]);
	}

	// ������ �迭 ��ü �޸� ����
	free(monsterArray);

	

	// �ٸ� Ǯ��

	Monster* pmons = (Monster*)malloc(sizeof(Monster) * count);   // count ������ŭ �����޸� �Ҵ�

	for (int i = 0; i < count; i++) {
		printf("%d��° ������ �̸��� �Է��ϼ���: ", i + 1);
		//scanf_s("%s", namebuff, sizeof(namebuff));   // �̸��� �Է¹���.
		scanf_s("%s", pmons[i].name, 30);
		//strcpy_s(pmons[i].name, 30, namebuff);

		printf("%d��° ������ ������� �Է��ϼ���: ", i + 1);
		scanf_s("%d", &pmons[i].health);

		printf("%d��° ������ ���ݷ��� �Է��ϼ���: ", i + 1);
		scanf_s("%d", &pmons[i].attack);

		printf("%d��° ������ ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &pmons[i].defense);
	}


	for (int i = 0; i < count; i++) {
		printf("%d��° ������ �̸�: %s, �����: %d, ���ݷ�: %d, ����: %d\n",
			i + 1, pmons[i].name, pmons[i].health, pmons[i].attack, pmons[i].defense);
	}

	free(pmons);


	return 0;
}