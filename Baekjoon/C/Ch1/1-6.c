// 입출력과 사칙연산
// 10869번 문제

#include <stdio.h>
int main()
{
    int A, B = 0;
    scanf("%d %d", &A, &B);
    printf("%d\n", A+B);
    printf("%d\n", A-B);
    printf("%d\n", A*B);
    printf("%d\n", A/B);
    printf("%d\n", A%B);
    return 0;
}