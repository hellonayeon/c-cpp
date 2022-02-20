/* 파일을 열고 닫는 프로그램 */

#include <stdio.h>

int main(void)
{
    FILE *fp;

    fp = fopen("a.txt", "r"); // 파일을 찾는 기본 위치는 '현재 디렉터리'
    if (fp == NULL)
    {
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }
    printf("파일이 열렸습니다.\n");
    fclose(fp);

    return 0;
}