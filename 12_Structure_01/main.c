#include <stdio.h>

struct tagStudent {
    char name[30];
    int grade;
    int classNum;
    struct tagStudent* Next;
};

typedef struct tagStudent Student;


// 구조체 멤버에 구조체 변수로 접근할때는 .(period)연산자로 접근
// 구조체 변수의 주소값으로 멤버에 접근할때는 ->(화살표)연산자로 접근.


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


    // st1 변수로 st4에 접근해서 grade = 3, classNum = 2로 변경하고
    // st1변수로 st4에 접근해서 이름, 학년, 반을 출력해보세요.

    st1.Next->Next->Next->grade = 3;
    st1.Next->Next->Next->classNum = 2;
    
	printf("\n\n");
    printf("이름: %s\n학년: %d\n반: %d\n", st1.Next->Next->Next->name, 
        st1.Next->Next->Next->grade, st1.Next->Next->Next->classNum);

    return 0;
}