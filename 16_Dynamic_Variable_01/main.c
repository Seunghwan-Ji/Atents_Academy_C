#include <stdio.h>
#include <stdlib.h> // malloc �Լ� ȣ��뵵.

// �����޸�..

// ������ ����
// ������ ����� ��ġ�� ���� Ű���忡 ���� ������ ������ �ٸ��ϴ�.

int global = 0;   // �ܺκ���, ��������

int main() {
    int local = 0;   // ���ú���, �ڵ�����

    static int vari = 0;   // ���ú���, ��������

    // ��������
    // �����߿� �޸𸮰����� �ʿ��Ҷ� ���� �޸� ����(Heap)�� ����մϴ�.
    // �����޸� ������ OS(�ü��)�� ���� �մϴ�.
    // �����޸� ������ �ʿ��Ҷ� OS���� ��û�Ͽ� �����޸� ������ �Ҵ� �޽��ϴ�.
    // C������ malloc, calloc, realloc �Լ��� ����Ͽ� �Ҵ��û�� �մϴ�.
    // �����޸𸮰����� �Ҵ� �޾����� �ݵ�� �ݳ�ó���� �ؾ� �մϴ�.

    int count = 0;
    printf("�����Ͻ� ������ ������ �Է��ϼ���: ");
    scanf_s("%d", &count);

    int* parray = (int*)malloc(sizeof(int) * count); // �����޸𸮰����� �Ҵ�.
    // malloc �Լ��� ����Ÿ���� void �̱⶧���� ����ȯ�� �ʿ��ϴ�.

    for (int i = 0; i < count; i++) {
        parray[i] = i;
        //*(parray + i) = i;
    }

    for (int i = 0; i < count; i++) {
        printf("parray[%d] = %d\n", i, parray[i]);
    }

    printf("\n\nint �� ��������� double�� ����������� ����\n");

    double* pfarray = (double*)parray;

    for (int i = 0; i < count / 2; i++) {
        pfarray[i] = i * 3.123;   // double ������ ����
    }

    for (int i = 0; i < count / 2; i++) {
        printf("pfarray[%d] = %lf\n", i, pfarray[i]);
    }

    free(parray);   // �����޸� ���� �ݳ�ó��(�ݵ�� �����޸� ������ �ݳ�ó�� �ؾ� ��)



    return 0;
}