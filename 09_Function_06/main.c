#include <stdio.h>


int MakeEven(int value) {
    if (value & 1) {
        return value + 1;
    }

    return value;
}

int MakeEven2(int value) {
    if (value % 2 == 0) {
        return value;
    }
    else {
        return value + 1;
    }
}

void div(int value1, int base) {
    float divValue = 0.0f;

    if (base == 0) {
        return;   // �Լ��� ������ �������� �� return���� ����� �� �ֽ��ϴ�.
        // return���� ������ �Լ��� ������ ����˴ϴ�.
    }

    divValue = value1 / (float)base; // value1 �� �ڵ����� �Ǽ��� ��ȯ��(������ ����ȯ)
                                     // ������� �Ǽ��� ���� �� �ֱ� ������ �� ���� float ������ ��ȯ����.

    printf("divValue = %f\n", divValue);
}

int main() {
    // �Է¹��� �������� ¦���� �Է¹��� ���� �����ϰ�
    // �Է¹��� �������� Ȧ���� ¦������ ���� �����ϴ� �Լ��� �����
    // ���� �Լ��� �̿��ؼ� ���� ����غ�����.
    int value = 0;
    printf("�������� �Է��ϼ���: ");
    scanf_s("%d", &value);

    int result = MakeEven(value);

    if (value % 2 == 0) {
        printf("value: %d�� ¦������ �������� ����\n", value);
    }
    else {
        printf("value: %d�� Ȧ������ ¦����:%d�� ������\n", value, result);
    }


    return 0;
}