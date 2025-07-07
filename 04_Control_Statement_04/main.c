#include <stdio.h>

// 0:TV On, 1: TV Off, 2: Volume Up, 3: Volume Down
// 4: Channel Up, 5: Channel Down

int main()
{
	int buttonNum = 0; // 버튼 번호 저장용

	printf("컨트롤 번호를 입력하세요: ");
	scanf_s("%d", &buttonNum);

	if (buttonNum == 0)
	{
		printf("TV ON\n");
	}
	else if (buttonNum == 1)
	{
		printf("TV OFF\n");
	}
	else if (buttonNum == 2)
	{
		printf("Volume UP\n");
	}
	else if (buttonNum == 3)
	{
		printf("Volume Down\n");
	}
	else if (buttonNum == 4)
	{
		printf("Channel UP\n");
	}
	else if (buttonNum == 5)
	{
		printf("Channel DOWN\n");
	}
	else // 생략 가능
	{
		printf("Wrong Number\n");
	}

	return 0;
}