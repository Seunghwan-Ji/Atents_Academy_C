#include <stdio.h>

// 동일한 코드가 반복이되는 경우
// 유용한 코드
// 코드들을 묶어서 하나의 단위로 만들어주는 편리한 기능이 있습니다.
// 함수(Function)라고 합니다.

// returnType 함수명(매개변수){
//        명령어들;
// }

// returnType(리턴타입) : 함수가 묶어놓은 명령어를 처리하고 결과값을 어떤 DataType으로
//						  전달할 것인지를 기재하면됩니다.
//                        returnType이 없는 경우(전달하는 값이 없다는 의미입니다.) 
//                       returnType을 void로 지정하면 됩니다.

// 함수명: 함수를 호출할때 사용하는 이름.
// 매개변수(parameter) : 함수를 호출할때 전달하는 인자(argument)값을 받는 변수

int add(int a, int b) {
	int temp = 0;
	temp = a + b;
	return temp; // return문은 함수 내부의 처리값을 함수 외부로 전달하는 역활을 합니다.
}

void PrintMonster5(void) {
	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");
}

// 함수 사용 장점
// 1. 재사용성
// 2. 모듈성
// 3. 가독성




void main() {

	int temp = 0;

	temp = add(20, 30);

	// ....
	PrintMonster5();

	// ....


	PrintMonster5();

	// ....

	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");




	
}