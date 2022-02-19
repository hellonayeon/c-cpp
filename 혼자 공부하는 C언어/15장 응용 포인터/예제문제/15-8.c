/* 함수 포인터로 원하는 함수를 호출하는 프로그램 */
// 함수를 정의할 때 일부를 구현하지 않고 함수가 호출될 때 그 기능을 결정

#include <stdio.h>

void func(int (*fp)(int, int)); // 함수 포인터를 매개변수로 갖는 함수
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);

int main(void)
{
    int sel;

    printf("01 두 정수의 합\n");
    printf("02 두 정수의 곱\n");
    printf("03 두 정수 중에서 큰 값 계산\n");
    printf("원하는 연산을 선택하세요: ");
    scanf("%d", &sel);

    switch(sel)
    {
        case 1: func(sum); break;
        case 2: func(mul); break;
        case 3: func(max); break;
    }

    return 0;
}

// 매개변수 fp는 함수 명을 저장
void func(int (*fp)(int, int))
{
    int a, b;
    int res;

    printf("두 정수의 값을 입력하세요: ");
    scanf("%d%d", &a, &b);
    res = fp(a, b);
    printf("결과값은: %d\n", res);
}

int sum(int a, int b)
{
    return (a + b);
}

int mul(int a, int b)
{
    return (a * b);
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}