#include <stdio.h>
void hanoi_tower(int n, char a, char b, char c){
    if (n==1) printf("원판 1을 %c에서 %c으로 옮긴다.\n", a, c);
    else {
        hanoi_tower(n-1, a, b, c);
        printf("원판 %d을 %c에서 %c으로 옮긴다.\n", n, a, c);
        hanoi_tower(n-1, b, a, c);
    }
}
int main(void){
    hanoi_tower(4, 'A', 'B', 'C');
    return 0;
}