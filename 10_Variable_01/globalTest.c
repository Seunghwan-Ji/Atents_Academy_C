#include <stdio.h>

//extern int global;   // global�̶�� ������ �ܺο� �־��� ������ ����
               // main.c���Ͽ� ���ǵ� �ܺκ��� global�� globalTest.c ���Ͽ��� ���ٵ�.


static int global2 = 0;

// ���������� �����ϴ� ���
// �������� ������ ����
// �Լ��� ���ؼ� �����ϵ��� �����ϴ� ���� �����ϴ�..
void SetGlobal2(int value) {
    if (value > 2000) {
        printf("value = %d\n", value);
    }
    else {
        global2 = value;
    }

}

int GetGlobal2() {
    return global2;
}


void PrintGlobal2() {
    printf("PrintGlobal2() global2 = %d\n", global2);
}