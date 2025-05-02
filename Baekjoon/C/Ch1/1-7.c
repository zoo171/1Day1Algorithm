// 입출력과 사칙연산
// 10926번 문제
// c언어에서 문자열의 길이는 strlen을 활용함함


#include <stdio.h>
#include <string.h> // strlen(), strcat()를 활용하기 위해 필요함
#include <ctype.h> // isupper()을 활용하기 위해서 필요함

int main()
{
    char c [50];
    char new [4] = "??!";

    scanf("%s", c);
    printf("%s", strcat(c, new));

    return 0;

}

/** 
int main()
{
    char c [50];
    char new [4] = "??!";

    scanf("%s", c);

    if(strlen(c) >= 50)
    {
        printf("id의 길이는 50글자를 넘을 수 없습니다.");
        return 0;
    }

    for (int i = 0; i < strlen(c); i++)
    {
        if(isupper(c[i]))
        {
            printf("id에는 대문자가 포함될 수 없습니다.");
            return 0;
        }
    }

    printf("%s", strcat(c, new));

    return 0;

}

**/