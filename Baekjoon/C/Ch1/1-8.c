// 입출력과 사칙연산
// 18108번 문제

#include<stdio.h>

int main()
{
    int year = 0;
    scanf("%d", &year);

    if(year < 1000)
    {
        printf("잘못된 입력입니다.");
        return 0;
    }
    else if(year > 3000)
    {
        printf("잘못된 입력입니다.");
        return 0;
    }

    int y_result = 0;
    y_result = year - 543;
    printf("%d", y_result);
    return 0;

}


