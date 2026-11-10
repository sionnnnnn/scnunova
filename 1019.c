#include <stdio.h>
#include <stdlib.h>

typedef struct Stype{
    int top;
    char arr[100];
}Stype;

void init(Stype *s){
    s->top=-1;
}

int is_full(Stype *s){
    return (s->top==99);     
}

int is_empty(Stype *s){
    return (s->top==-1);
}

void push(Stype *s, int item){
    if (is_full(s)){
        printf("스택 포화 에러\n");
        return;
    }
    else
    s->arr[++(s->top)] = item;
}

int pop(Stype *s){
    if (is_empty(s)){
        printf("스택 공백 에러\n");
        exit(1);
    }
    else
    return s->arr[(s->top)--];
}

int peek(Stype *s){
    if (is_empty(s)){
        printf("스택 공백 에러\n");
        exit(1);
    }
    else
    return s->arr[s->top];
}

int main(void){
    Stype s1;
    init(&s1);

    push(&s1, 3);
    push(&s1, 2);
    push(&s1, 1);

    
    printf("%d\n", pop(&s1));
    printf("%d\n", pop(&s1));
    printf("%d\n", pop(&s1));


}
