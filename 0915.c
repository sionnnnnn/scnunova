#include <stdio.h>

int f(int x, int n)
{
    if(n==0) {
        return 1;
    }
    else {
        return x*f(x, n-1);
    }
}

int main() {
    int x, n;
    printf("x값을 입력하세요: ");
    scanf("%d", &x);
    printf("n값을 입력하세요: ");
    scanf("%d", &n);

    int result = f(x, n);
    printf("%d의 %d승은 %d입니다.\n", x, n, result);

}