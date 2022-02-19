/* 3개의 문자열을 저장하기 위한 동적 할당 */
// 길이가 다른 여러개의 문자열을 효율적으로 처리하는 방법
// 여러개의 문자열을 그 길이에 맞게 저장

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char temp[80];
    char *str[3];
    int i;

    for (i=0; i<3; i++)
    {
        printf("문자열을 입력하세요: ");
        gets(temp);
        // str[i] = (char *)malloc(strlen(temp) + 1); // strlen()은 NULL 문자를 제외하고 문자열의 길이를 계산
        *(str + i) = (char *)malloc(strlen(temp) + 1);
        strcpy(str[i], temp);
    }

    // for (i=0; i<3; i++)
    // {
    //     printf("%s\n", str[i]);
    // }

    int j;
    for (i=0; i<3; i++)
    {
        char *temp = *(str + i);
        for (j=0; j<=strlen(temp); j++)
        {
            printf("%c", *(temp + j));
        }
        printf("\n");
    }

    for (i=0; i<3; i++)
    {
        free(str[i]);
    }

    return 0;
}