/* fgets 함수의 문자열 입력 방법 */
// fgets 함수는 최대 배열의 크기까지만 문자열을 입력

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[80];

    printf("공백이 포함된 문자열 입력: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str)-1] = '\0';
    printf("입력된 문자열은 %s입니다.\n", str);
}