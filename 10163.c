#include <stdio.h>

void swap(char **a, char **b)
{
    char *temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    char *a = "apple";
    char *b = "banana";

    swap(&a, &b);

    printf("%s %s\n", a, b);
}