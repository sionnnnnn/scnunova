#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100

typedef struct Stack {
    int arr[MAX_STACK_SIZE];
    int top;
}Stacktype;

void init(Stacktype *s){
    s->top = -1;
}

int is_full(Stacktype *s){
    return (s->top==-1);
}
int is_empty(Stacktype *s){
    return (s->top == MAX_STACK_SIZE-1);
}

void push(Stacktype *s, int value){
    if(is_full(s)){
        printf("스택이 가득 참!!");
        return;
    }
    else
        s->arr[++(s->top)] = value;
}

int pop(Stacktype *s){
    if(is_empty(s)){
        printf("스택 다 비엇는데?!");
        exit(1);
    }
    else
        return (s->arr[(s->top)--]);
}

int peek(Stacktype *s){
    if(is_empty(s)){
        printf("아니 다 비엇다고;;");
        exit(1);
    }
    return (s->arr[s->top]);
}

int main(){
    Stacktype s;

    push(&s, 3);
    push(&s, 2);
    push(&s, 1);

    printf("%d\n", peek(&s));

    printf("pop: %d\n", pop(&s));
    printf("pop: %d\n", pop(&s));
    printf("pop: %d\n", pop(&s));

}