/* 표준 입출력 스트림을 사용한 문자열 입력 */

#include <stdio.h>

int main(void)
{
    int ch;

    while (1)
    {
        ch = getchar();
        if (ch == EOF)
        {
            break;
        }
        putchar(ch);
    }

    return 0;
}