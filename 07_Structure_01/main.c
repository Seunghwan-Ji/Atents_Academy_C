#include <stdio.h>
#include <string.h>



//typedef struct tagCar Car;

int main() {
	typedef struct tagCar {
		char modelName[30]; // ����ü ���
		int speed;
		int limitSpeed;
		int wheelCount;
	} Car;

	struct tagCar a;

	Car car = { "����", 70, 220, 4 };

	printf("�𵨸�: %s\n����ӵ�: %d\n�ְ�ӵ�: %d\n������: %d\n",
		car.modelName, car.speed, car.limitSpeed, car.wheelCount);

	Car car2;

	printf("�ڵ��� �𵨸��� �Է��ϼ���: ");
	scanf_s("%s", car2.modelName, sizeof(car2.modelName));

	printf("���� �ӵ��� �Է��ϼ���: ");
	scanf_s("%d", &car2.speed);

	printf("�ִ�ӵ��� �Է��ϼ���: ");
	scanf_s("%d", &car2.limitSpeed);

	printf("�������� �Է��ϼ���: ");
	scanf_s("%d", &car2.wheelCount);

	printf("\n");
	printf("�𵨸�: %s\n����ӵ�: %d\n�ְ�ӵ�: %d\n������: %d\n"
		, car2.modelName, car2.speed, car2.limitSpeed, car2.wheelCount);


	// ���� �ִ� ������ǰ 2���� ����ü ����Ÿ Ÿ���� ����ð� ������ �����
	// ���� ä���� ����غ�����...

	typedef struct tagRefrigerator {
		char productCompany[30];
		float capacity;
		int doorCount;
	} Refrigerator;

	typedef struct tagTelevision {
		char productCompany[30];
		float resolution;
		float size;
	} Television;

	Refrigerator refri = { "�Ｚ", 618.0f, 4 };
	Television tele = { "����", 1920, 180 };


	Refrigerator refri2;

	refri2.productCompany[0] = 'S';
	refri2.productCompany[1] = 'A';
	refri2.productCompany[2] = 'M';
	refri2.productCompany[3] = '\0';

	strcpy(refri2.productCompany, "Samsung");


	printf("����ȸ��: %s, �뷮: %f, �����: %d\n", refri.productCompany, refri.capacity, refri.doorCount);
	printf("����ȸ��: %s, �ػ�: %f, ȭ�������: %f\n", tele.productCompany, tele.resolution, tele.size);








	return 0;
}