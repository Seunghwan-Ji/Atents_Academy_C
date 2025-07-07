#include <stdio.h>

// �Լ� ������

float add(int a, int b) {
    return  a + b;
}

float sub(int a, int b) {
    return a - b;
}

float mul(int a, int b) {
    return a * b;
}


float div(int a, int b) {
    return a / (float)b;
}

int main() {
    // �Լ��� DataType���� �޾Ƶ帳�ϴ�.
    // �Լ���
    // ��ɾ �����ϴ� DataType�Դϴ�.
    // �Լ��� �޸� ������ ��ġ�մϴ�.
    // �޸𸮿� ����Ǿ��ִ� �������� ��ɾ��� �ǹ��Դϴ�.

    int a = 20;
    int b = 30;


    printf("add = %p\n", add);

    float(*pfunc)(int, int); // �Լ� �������� ����
    // ����Ÿ���� float , �Ű������� int�� 2���� ���ϴ� �Լ���
    // �ּҰ��� �����ϴ� ���� pfunc


    pfunc = add;

    printf("add = %p, pfunc = %p\n", add, pfunc);

    float fret = pfunc(a, b);   // pfunc������ pfunc������ �����ϰ� �ִ� �Լ��� ȣ��

    printf("%d + %d = %f\n", a, b, fret);

    pfunc = &sub; // & ��ȣ�� �� �ٿ��� ������ ��������� ����ϴ°� ����.

    fret = pfunc(a, b);
    printf("%d - %d = %f\n", a, b, fret);

    pfunc = &mul;

    fret = pfunc(a, b);
    printf("%d x %d = %f\n", a, b, fret);

    pfunc = &div;
    fret = pfunc(a, b);
    printf("%d / %d = %f\n", a, b, fret);




    return 0;
}