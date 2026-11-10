#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct ListNode{
    element data;
    struct ListNode *link;
}ListNode;

int main(){
    ListNode *head = NULL; //아직 주소없어서 널포인터로 채움 !! ㅎㅎㅎㅎㅎㅎ✌🏻😄✌🏻
    ListNode *p;

    head = (ListNode*)malloc(sizeof(ListNode));
    p = (ListNode*)malloc(sizeof(ListNode));

    head->data = 10;
    head->link = p;

    p->data = 20;
    p->link = NULL;

    printf("%d\n", head->data);
    printf("%d\n", p->data);
    printf("%d\n", head->link->data); // 위의 줄의 코드와 같은 20 출력
}