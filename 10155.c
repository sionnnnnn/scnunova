#include <stdio.h>
#include <stdlib.h>

typedef struct studentTag {
    int age;
    double gpa;
} student;

//정답칸
void swapSt(student *n, student *m){
    student temp;
    temp = *n;
    *n = *m;
    *m = temp;
}




int main(void) {
    student a = {20, 4.3};
    student b = {21, 3.7};
    // swapSt(&a, &b); //정답칸

    // printf("%d\n", a.age);

    student *sp = (student*)malloc(sizeof(student));

    sp->age = a.age;
    sp->gpa = a.gpa;

    printf("%d, %.1lf", sp->age, sp->gpa);

}