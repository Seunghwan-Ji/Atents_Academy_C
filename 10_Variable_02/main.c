#include <stdio.h>
// ������ ����
// ���ٹ���, ���ӱⰣ


// �Լ��� ȣ���Ҷ� ���ڰ��� �޴� �Ű������� ���ú���, �ڵ������Դϴ�.
int add(int a, int b) {
    int temp = 0;

    temp = a + b;

    return temp;
}

int SetScore(int value) {
    static int sum = 0; // ���ú���, �ڵ����� -> ��������
    // static�� ���� ������ ���������Դϴ�.
    // ���ٹ������� �鿡������ ���ú����Դϴ�.
    // ���ӱⰣ���� �鿡������ sum������ ���������Դϴ�.
    // ���������� �ڽ��� ���ǵ� �Լ��� ȣ��ɶ� ������ ������ ����
    // �ǰ� ������ ������ ���α׷��� ����ɶ����� ������� �ʽ��ϴ�.
    // ���������� ���α׷� �����ֱ⳻�� ��ȿ�մϴ�.

    sum += value;

    return sum;
}

int main() {
    int a = 20;
    int b = 30;

    int ret = add(a, b);

    for (int i = 0; i < 10; i++) {
        SetScore(i);
    }

    ret = SetScore(0);

    printf("SetScore ret = %d\n", ret);






    return 0;
}