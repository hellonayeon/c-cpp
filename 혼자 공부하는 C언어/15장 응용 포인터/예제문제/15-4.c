/* 주소로 쓰이는 배열명과 배열의 주소 비교 */

#include <stdio.h>

int main(void)
{
    int ary[5];

    printf(" ary의 값: %u\t", ary);
    printf("ary의 주소: %u\n", &ary);
    printf(" ary + 1: %u\t", ary + 1);

    // 배열의 주소에 정수를 더하면 배열이 할당된 메모리 영역을 벗어나므로 특별한 경우가 아니면 사용X
    // printf("&ary + 1: %u\n", &ary + 1);

    // &ary는 ary 배열 전체를 가리킨다.
}