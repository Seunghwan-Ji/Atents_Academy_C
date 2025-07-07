#include <stdio.h>

// 정수값에 따라서 분기 처리할때.
// Switch-Case문을 사용..

// 0:TV On, 1: TV Off, 2: Volume Up, 3: Volume Down
// 4: Channel Up, 5: Channel Down

int main()
{
	int buttonNum = 0; // 버튼 번호 저장용

	printf("컨트롤 번호를 입력하세요: ");
	scanf_s("%d", &buttonNum);

	switch (buttonNum)
	{
	case 0:
		printf("TV ON\n");
		break;

	case 1:
		printf("TV OFF\n");
		break;

	case 2:
		printf("Volume UP\n");
		break;

	case 3:
		printf("Volume Down\n");
		break;

	case 4:
		printf("Volume Down\n");
		break;

	case 5:
		printf("Channel Down\n");
		break;

	default:
		printf("Wrong Number\n");
		break;
	}

	return 0;
}