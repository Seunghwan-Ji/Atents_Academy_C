#include <stdio.h>

int main() {
    int money = 0;

    printf("용돈 금액을 입력하세요: ");
    scanf_s("%d", &money);

    if (money <= 40000 && money > 20000)
    {
        printf("카페\n");
    }
    else if (money > 100000) { // 다중 조건문
        printf("영화\n");
    }
    else if (money <= 100000 && money > 80000) {
        printf("볼링장\n");
    }
    else if (money <= 80000 && money > 60000) {
        printf("중국집\n");
    }
    else if (money <= 60000 && money > 40000) {
        printf("당구장\n");
    }
    else { // 위부분에서 모든 조건을 처리하는 경우에는 생략가능
        printf("낮잠\n");
    }

    return 0;
}