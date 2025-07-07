#include <stdio.h>


int main() {
	int isLeg = 0;
	int isHand = 0;
	int isHead = 0;
	int isThink = 0;
	int is2eyes = 0;
	int isGugudan = 0;


	printf("다리가 2개 있습니까?(거짓: 0, 참: 1) ");
	scanf_s("%d", &isLeg);
	printf("팔이 2개 있습니다까?(거짓: 0, 참: 1) ");
	scanf_s("%d", &isHand);
	printf("머리가 있습니까?(거짓: 0, 참: 1) ");
	scanf_s("%d", &isHead);
	printf("생각을 합니까?(거짓: 0, 참: 1)  ");
	scanf_s("%d", &isThink);
	printf("눈이 2개 있습니까?(거짓: 0, 참: 1) ");
	scanf_s("%d", &is2eyes);
	printf("구구단을 외울 수 있습니까? (거짓: 0, 참: 1) ");
	scanf_s("%d", &isGugudan);

	// 논리식으로 처리
	int isHuman = isLeg && isHand && isHead && isThink && is2eyes && isGugudan;

	if (isHuman) {
		printf("인간입니다.\n");
	}
	else {
		printf("인간인지 애매합니다.\n");
	}


	// 정수식으로 처리
	int checkCount = isLeg + isHand + isHead + isThink + is2eyes + isGugudan;

	printf("checkCount = %d\n", checkCount);

	if (checkCount >= 6) { // 6
		printf("인간이 확실합니다.\n");
	}
	else if (checkCount > 3 && checkCount < 6) { // 4, 5
		printf("인간일꺼 같습니다.\n");
	}
	else if (checkCount > 1 && checkCount <= 3) { // 2, 3
		printf("인간일꺼라는 확신이 들지 않습니다.\n");
	}
	else {
		printf("인간이 아니고 짐승에 가깝습니다.\n");
	}

	// 위에 if-else-if문을 Switch-case 문으로 만들어 보세요.


	return 0;
}