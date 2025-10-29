#include <stdio.h>
int main(void)
{
int aa, bb, cc, dd;
printf( ＂사각형의 가로 길이를 입력하시요: ");
scanf("%d", &aa);
printf( ＂ 사각형의 세로 길이를 입력하시요: "); 
scanf("%d", &bb);
cc = aa * bb;
dd = 2*aa + 2 *bb;
printf(“사각형의 면적은 %d입니다.", cc);
printf(“사각형의 둘레는 %d입니다.", dd);
return 0;
}
