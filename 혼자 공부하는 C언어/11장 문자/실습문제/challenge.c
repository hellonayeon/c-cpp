/* 길이가 가장 긴 단어 찾기 */
#include <stdio.h>

int main(void)
{
    char ch;
    int len = 0, max = 0;
    
    while (1)
    {
        if (scanf("%c", &ch) == -1) 
        {
            break;
        }

        if (ch == '\n') 
        {
            max = len > max ? len : max;
            len = 0;
        }
        else {
            len++;
        }
    }

    printf("가장 긴 단어의 길이: %d\n", max);
}

/* [정답]*/
/*
#include <stdio.h>

int main(void)
{
    char ch;
    int len = 0, max = 0;
    
    while (1)
    {
        ch = getchar();
        if (ch == -1) {
            break;
        }
        
        len = 0;
        while (ch != '\n')
        {
            len++;
            ch = getchar();
        }
        printf("길이: %d\n", len);
        max = len > max ? len : max;
    }   

    printf("가장 긴 단어의 길이: %d\n", max);
}
*/