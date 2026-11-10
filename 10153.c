#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Person {
    char name[20];
    int age;
    char adress[100];
}Person;

int main() {
    Person *p1 = malloc(sizeof(Person));
    
    strcpy(p1->name, "오시온");
    p1->age = 21;
    strcpy(p1->adress, "인천광역b시 ㅅㅅㅅㅅ");

    printf("이름: %s\n", p1->name);
    printf("나이: %d\n", p1->age);
    printf("주소: %s\n", p1->adress);

    free(p1);

    return 0;
}

