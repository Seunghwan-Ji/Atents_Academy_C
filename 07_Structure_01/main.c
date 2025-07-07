#include <stdio.h>
#include <string.h>



//typedef struct tagCar Car;

int main() {
	typedef struct tagCar {
		char modelName[30]; // 구조체 멤버
		int speed;
		int limitSpeed;
		int wheelCount;
	} Car;

	struct tagCar a;

	Car car = { "에쿠스", 70, 220, 4 };

	printf("모델명: %s\n현재속도: %d\n최고속도: %d\n바퀴수: %d\n",
		car.modelName, car.speed, car.limitSpeed, car.wheelCount);

	Car car2;

	printf("자동차 모델명을 입력하세요: ");
	scanf_s("%s", car2.modelName, sizeof(car2.modelName));

	printf("현재 속도를 입력하세요: ");
	scanf_s("%d", &car2.speed);

	printf("최대속도를 입력하세요: ");
	scanf_s("%d", &car2.limitSpeed);

	printf("바퀴수를 입력하세요: ");
	scanf_s("%d", &car2.wheelCount);

	printf("\n");
	printf("모델명: %s\n현재속도: %d\n최고속도: %d\n바퀴수: %d\n"
		, car2.modelName, car2.speed, car2.limitSpeed, car2.wheelCount);


	// 집에 있는 가전제품 2개의 구조체 데이타 타입을 만드시고 변수를 만들고
	// 값을 채워서 출력해보세요...

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

	Refrigerator refri = { "삼성", 618.0f, 4 };
	Television tele = { "엘지", 1920, 180 };


	Refrigerator refri2;

	refri2.productCompany[0] = 'S';
	refri2.productCompany[1] = 'A';
	refri2.productCompany[2] = 'M';
	refri2.productCompany[3] = '\0';

	strcpy(refri2.productCompany, "Samsung");


	printf("제조회사: %s, 용량: %f, 도어수: %d\n", refri.productCompany, refri.capacity, refri.doorCount);
	printf("제조회사: %s, 해상도: %f, 화면사이즈: %f\n", tele.productCompany, tele.resolution, tele.size);








	return 0;
}