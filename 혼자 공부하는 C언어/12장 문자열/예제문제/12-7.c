/* 문자열을 출력하는 puts와 fputs 함수 */

#include <stdio.h>

int main(void)
{
    char str[80] = "apple juice";
    char *ps = "banana";

    // 어떤 경우든 문자열에서 첫 번째 문자 주소가 되므로 결국 문자열이 출력
    puts(str);
    fputs(ps, stdout);
    puts("milk");

    return 0;
}