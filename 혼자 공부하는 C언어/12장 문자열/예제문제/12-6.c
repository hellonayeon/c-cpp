/* 개행 문자로 인해 gets 함수가 입력을 못하는 경우 */

#include <stdio.h>

int main(void)
{
    int age;
    char name[20];

    printf("나이 입력: ");
    scanf("%d", &age);

    printf("이름 입력: ");
    gets(name); // 입력된 개행 문자('\n') ➜  널 문자('\0')
    printf("나이: %d, 이름: %s", age, name);

    return 0;
}