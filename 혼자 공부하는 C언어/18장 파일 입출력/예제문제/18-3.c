/* 문자열을 한 문자씩 파일로 출력하기 */

#include <stdio.h>

int main(void)
{
    FILE *fp;
    char str[] = "banana";
    int i;

    fp = fopen("b.txt", "w");
    if (fp == NULL)
    {
        printf("파일을 만들지 못했습니다.\n");
        return 1;
    }

    i = 0;
    while (str[i] != '\0')
    {
        fputc(str[i], fp);
        i++;
    }

    fputc('\n', fp);
    fclose(fp);

    return 0;
}