#include <stdio.h>
#include "GlobalTest.h"

// 변수의 종류
// 접근범위, 존속기간으로 변수를 구분하기도 합니다.


// 외부변수에 static 키워드를 사용하면
// 외부변수가 선언되어있는 파일에서만 접근이 가능한 외부변수 됩니다.
static int global = 10; // 외부변수, 전역변수
// 프로그램이 가동될때 변수가 만들어지고
// 프로그램이 가동하는 동안에 변수는 유효합니다.
// 프로그램이 종료될때 외부변수가 없어집니다.
// 외부변수를 될 수 있으면 사용하지 말라고 합니다.(권고사항)
// 외부변수를 남용하면 가독성이 떨어집니다.


int main() {
	int a; // 지역변수(로컬변수), 자동변수(auto varialble)
	a = 20;

	int b = 200;

	{
		int a; // 지역변수, 자동변수
		a = 200;

		int c = 1000;

		b = 1000;

		printf("a = %d, b = %d, c = %d\n", a, b, c);

	}

	//c = 20;

	global = 20000;
	PrintGlobal2();

	SetGlobal2(40000);

	PrintGlobal2();





	return 0;
}