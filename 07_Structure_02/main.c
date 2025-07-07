#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct tagAnimal {
	int type;	// 0:¼Ò, 1:µÅÁö, 2:´ß
	char name[30];
	float weight;
	float age;
} Animal;

int main() {
	Animal array[3] = { {0, "¼Ò", 180, 3}, };

	Animal animalArray[10]; // ±¸Á¶Ã¼ ¹è¿­

	int length = sizeof(animalArray) / sizeof(animalArray[0]);

	for (int i = 0; i < length; i++) {
		int select = i % 3;

		switch (select) {
		case 0:
			sprintf(animalArray[i].name, "¼Ò_%d", i);
			animalArray[i].type = 0;
			animalArray[i].weight = 200 + (i * 3);
			animalArray[i].age = ((i + 1) * 10) % 5 + 2;

			break;

		case 1:
			sprintf(animalArray[i].name, "µÅÁö_%d", i);
			animalArray[i].type = 1;
			animalArray[i].weight = 180 + (i * 3);
			animalArray[i].age = ((i + 1) * 10) % 5 + 2;

			break;

		case 2:
			sprintf(animalArray[i].name, "´ß_%d", i);
			animalArray[i].type = 2;
			animalArray[i].weight = 4 + (i * 3);
			animalArray[i].age = ((i + 1) * 10) % 5 + 2;

			break;
		}
	}

	for (int i = 0; i < length; i++) {
		switch (animalArray[i].type) {
		case 0:
			printf("¼Ò:\n");
			printf("ÀÌ¸§: %s\n", animalArray[i].name);
			printf("¸ö¹«°Ô: %f\n", animalArray[i].weight);
			printf("³ªÀÌ: %f\n", animalArray[i].age);
			break;

		case 1:
			printf("µÅÁö:\n");
			printf("ÀÌ¸§: %s\n", animalArray[i].name);
			printf("¸ö¹«°Ô: %f\n", animalArray[i].weight);
			printf("³ªÀÌ: %f\n", animalArray[i].age);

			break;


		case 2:
			printf("´ß:\n");
			printf("ÀÌ¸§: %s\n", animalArray[i].name);
			printf("¸ö¹«°Ô: %f\n", animalArray[i].weight);
			printf("³ªÀÌ: %f\n", animalArray[i].age);

			break;

		default:
			printf("Animal Type Error\n");
			break;
		}
		printf("\n");
	}
}