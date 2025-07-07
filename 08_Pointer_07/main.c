#include <stdio.h>



int main() {
	char str[] = { 'R', 'E', 'T', 'S', 'N', 'O', 'M' };

	// str 문자배열의 에 "Monster" 문자열이 거꾸로 저장되어있습니다.
	// str문자배열의 값을 "Monster" 순으로 저장해보세요.

	int length = sizeof(str) / sizeof(str[0]);
	for (int i = length - 1; i >= 0; i--) 
	{
		printf("%c ", str[i]);
	}


	//i = 0;

	char temp;
	temp = str[0];  // i = 0;
	str[0] = str[6]; // length - (1 + i);
	str[6] = temp;

	temp = str[1]; // i = 1
	str[1] = str[5]; // length - (1 + i);
	str[5] = temp;

	temp = str[2]; // i = 2
	str[2] = str[4]; // length - (1 + i)
	str[4] = temp;

	temp = str[3];
	str[3] = str[3];
	str[3] = temp;


	//
	int length = sizeof(str) / sizeof(str[0]);


	for (int i = 0; i < length / 2; i++) {
		char temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	}






	return 0;
}