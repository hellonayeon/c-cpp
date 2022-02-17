/* strcpy와 기능이 같은 함수의 구현 */

#include <stdio.h>

char *my_strcpy(char *pd, char *ps);

int main(void)
{
    char str[80] = "strawberry";

    printf("바꾸기 전 문자열: %s\n", str);
    my_strcpy(str, "apple");
    printf("바꾼 후 문자열: %s\n", str);
    printf("다른 문자열 대입: %s\n", my_strcpy(str, "kiwi"));

    return 0;
}

char *my_strcpy(char *pd, char *ps)
{
    char *po = pd;

    while (*ps != '\0')
    {
        *pd = *ps;
        pd++; ps++;
    }
    *pd = '\0';

    return po; // 복사가 끝난 저장 공간의 '시작 주소' 반환
}

/* 직접 만드는 strcat 함수 */
char *my_strcat(char *pd, char *ps)
{
    char *po = pd;

    while (*pd != '\0')
    {
        pd++;
    }

    while (*ps != '\0')
    {
        *pd = *ps;
        pd++; ps++;
    }
    *pd = '\0';

    return po;
}

/* 직접 만드는 strlen 함수 */
int my_strlen(char *ps)
{
    int cnt = 0;
    
    while (*ps != '\0')
    {
        cnt++;
        ps++;
    }

    return cnt;
}

/* 직접 만드는 strcmp 함수 */
int my_strcmp(char *pa, char *pb)
{
    while ((*pa == *pb) && (*pa != '\0'))
    {
        pa++;
        pb++;
    }

    if (*pa > *pb) return 1;
    else if (*pa < *pb) return -1;
    else return 0;
}