#include <stdio.h>
#include <stdlib.h>

typedef struct studentTag{
    int age;
    double gpa;
}student;

void swapSt(student *a, student *b){
    student temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){
    student a = {20, 4.3};
    student b = {21, 4.5};

    swapSt(&a, &b);

    printf("%d %.1f", a.age, a.gpa);

    return 0;

}