/* 공백이나 제어 문자의 입력 */

#include <stdio.h>

int main(void)
{
    char ch1, ch2;

    scanf("%c%c", &ch1, &ch2);
    printf("[%c%c]", ch1, ch2);

    scanf("%c %c", &ch1, &ch2);
    printf("[%c%c]", ch1, ch2);

    return 0;
}