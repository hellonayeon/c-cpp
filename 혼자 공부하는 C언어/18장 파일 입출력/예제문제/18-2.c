/* 파일의 내용을 화면에 출력하기 */

#include <stdio.h>

int main(void)
{
    FILE *fp;
    int ch;

    fp = fopen("a.txt", "r");
    if (fp == NULL)
    {
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }

    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
        {
            break;
        }

        putchar(ch);
    }
    
    fclose(fp);

    return 0;
}