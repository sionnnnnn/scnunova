#include <stdio.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
    char adress[100];
}p1;

int main() {
    strcpy(p1.name, "오시온");
    p1.age = 21;
    strcpy(p1.adress, "인천광역시 ㅅㅅㅅㅅ");

    printf("이름: %s\n", p1.name);
    printf("나이: %d\n", p1.age);
    printf("주소: %s\n", p1.adress);

    return 0;
}