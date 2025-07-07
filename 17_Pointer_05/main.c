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
    int a = 20;
    int b = 30;

    char oper = 0;
    float fret = 0;
    int operNum = 0;

    char operArray[] = { '+', '-', 'x', '/' };

    float(*operfuncArray[4])(int, int);   // �Լ� ������ �迭

    operfuncArray[0] = add;
    operfuncArray[1] = sub;
    operfuncArray[2] = mul;
    operfuncArray[3] = div;

    printf("���� ����� �Է��ϼ���(+, -, x, /): ");
    scanf_s("%c", &oper);

    operNum = -1;
    for (int i = 0; i < 4; i++) {
        if (operArray[i] == oper) {
            operNum = i;

            break;
        }
    }

    if (operNum != -1) {
        printf("%d %c %d = %f\n", a, operArray[operNum], b, operfuncArray[operNum](a, b));

    }
    else {
        printf("�����ȣ�� �߸� �Է��ϼ̽��ϴ�. \n");
    }

    // �Լ��� �迭�� �ְ� �ϰ������� ó��
    printf("\n\n�ϰ� ���� ó��\n");
    for (int i = 0; i < 4; i++) {
        printf("%d %c %d = %f\n", a, operArray[i], b, operfuncArray[i](a, b));
    }

    return 0;
}