#include <stdio.h>

int factorial(int n)
{
    if(n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int result;

    printf("숫자를 입력하세요: ");
    scanf("%d", &result);
    printf("입력한 숫자의 팩토리얼 값은 = %d입니다.\n", factorial(result));

    return 0;
}

// int fac(int n)
// {
//     if(n<=1)
//         return 1;

//     else
//         return(n*fac(n-1));
// }


