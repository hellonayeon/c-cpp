/* 대문자를 소문자로 변경 */

#include <stdio.h>

int main(void)
{
    char small, cap = 'G';

    if ((cap >= 'A') && (cap <= 'Z'))
    {
        small = cap + ('a' - 'A');
    }

    printf("대문자: %c %c", cap, '\n');
    printf("소문자: %c", small);

    return 0;
}