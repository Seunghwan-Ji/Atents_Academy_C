#include <stdio.h>

struct tagStudent {
    char name[30];
    int grade;
    int classNum;
    struct tagStudent* Next;
};

typedef struct tagStudent Student;


// ����ü ����� ����ü ������ �����Ҷ��� .(period)�����ڷ� ����
// ����ü ������ �ּҰ����� ����� �����Ҷ��� ->(ȭ��ǥ)�����ڷ� ����.


int main() {
    Student st1 = { "monster1", 1, 3, NULL };
    Student st2 = { "monster2", 2, 10, NULL };
    Student st3 = { "monster3", 3, 5, NULL };
    Student st4 = { "monster4", 1, 7, NULL };

    st1.Next = &st2;
    st2.Next = &st3;
    st3.Next = &st4;

    printf("st3.name = %s, st3.grade = %d, st3.classNum = %d",
        st1.Next->Next->name, st1.Next->Next->grade, st1.Next->Next->classNum);


    // st1 ������ st4�� �����ؼ� grade = 3, classNum = 2�� �����ϰ�
    // st1������ st4�� �����ؼ� �̸�, �г�, ���� ����غ�����.

    st1.Next->Next->Next->grade = 3;
    st1.Next->Next->Next->classNum = 2;
    
	printf("\n\n");
    printf("�̸�: %s\n�г�: %d\n��: %d\n", st1.Next->Next->Next->name, 
        st1.Next->Next->Next->grade, st1.Next->Next->Next->classNum);

    return 0;
}