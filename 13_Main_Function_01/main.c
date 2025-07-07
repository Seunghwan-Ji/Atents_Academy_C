#include <stdio.h>

// main�Լ��� ���α׷��� ������ġ�� �˷��ִ� ������ �մϴ�.
// �������Լ�(entry point)��� �մϴ�.

// main�Լ��� ����
// ����� ����
// int argc <= ���޹��� ����� ���ڿ��� ����
// char* argv[] <= ���޹��� ���ڿ��� ���ι��� �ּҰ��� �����ϴ� �迭

// int main(int argc, char* argv[]){
//      ��ɾ�;
// 
//      return;
// }


int main(int argc, char* argv[]) {   // �������Լ�

    // argv[0]: ���α׷���
    // argv[1]: �Է��� ���ڿ�..
    // argv[2]: �Է��� ���ڿ�...

    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    getchar();   // �ѹ��� �Է� �޴� �Լ�

    // ��� ������Ʈ ���� -> cd C:\Users\user\source\repos\Atents_Academy_C\x64\Debug �Է�
    // -> dir �Է� -> 13_Main_Function_01.exe ����
    // -> 13_Main_Function_01.exe monster01 monster02 monster03 �Է�
    // ���α׷��� ����ǰ�, �Է��� ���ڿ��� ��µǴ��� Ȯ���Ѵ�.

    return 0;
}