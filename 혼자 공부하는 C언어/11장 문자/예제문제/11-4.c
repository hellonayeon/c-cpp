/* 버퍼를 사용하는 문자 입력 */

#include <stdio.h>

int main(void)
{
    char ch;
    int i;

    for (i=0; i<3; i++)
    {
        scanf("%c", &ch);
        printf("%c", ch);
    }

    return 0;
}