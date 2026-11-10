#include <stdio.h>

// // n번째 피보나치 수를 구하는 재귀 함수
// int fibonacci(int n) {
//     // 1. 기저 조건 (Base Case): 멈추는 조건
//     if (n <= 0) {
//         return 0;
//     }
//     if (n == 1 || n == 2) {
//         return 1;
//     }
    
//     // 2. 재귀 호출: 앞의 두 값을 더해서 반환
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main(void) {
//     int n = 6;
//     printf("피보나치 수열 %d번째 항: %d\n", n, fibonacci(n)); // 결과: 8
//     return 0;
// }

int fib_iter(int n){
    if (n==0) return 0;
    if (n==1) return 1;

    int pp = 0;
    int p = 1;
    int result = 0;

    for (int i =2; i<=n; i++){
        result = p+pp;
        pp=p;
        p=result;
    }
    return result;

}