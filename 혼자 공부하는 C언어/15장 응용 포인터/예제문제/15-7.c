/* 함수 포인터를 사용한 함수 호출 */

#include <stdio.h>

int sum(int, int);

int main(void)
{
    int (*fp)(int, int); // 함수의 주소를 저장할 함수 '포인터'
    // int *fp(int, int); // 두 정수를 인수로 받고 주소를 반환하는 함수의 '선언'
    int res;

    fp = sum; // 함수명 = 주소
    res = fp(10, 20);
    // res = (*sum)(10, 20); // 함수명도 주소!
    printf("resut: %d\n", res);

    return 0;
}

int sum(int a, int b)
{
    return (a + b);
}