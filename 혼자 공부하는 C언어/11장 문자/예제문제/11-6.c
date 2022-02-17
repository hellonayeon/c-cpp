/* getchar 함수를 사용한 문자열 입력 */

#include <stdio.h>

void my_gets(char *str, int size);

int main(void)
{
    char str[7];

    my_gets(str, sizeof(str));
    printf("입력한 문자열: %s\n", str);

    return 0;
}

void my_gets(char *str, int size)
{
    int ch;
    int i = 0;

    ch = getchar(); // 첫 번째 문자 입력
    while ((ch != '\n') && (i < size-1))
    {
        str[i] = ch;
        i++;
        ch = getchar(); // 새로운 문자 입력
    }
    str[i] = '\0';
}