/* 포인터와 이중 포인터의 관계 */

#include <stdio.h>

int main(void)
{
    int a = 10;
    int *pi;
    int **ppi;

    pi = &a;
    ppi = &pi;

    printf("----------------------------------------\n");
    printf("변수             변숫값              &연산              *연산                 **연산\n");
    printf("  a%20d%20u\n", a, &a);
    printf(" pi%20u%20u%20d\n", pi, &pi, *pi);
    printf("ppi%20u%20u%20u%20u\n", ppi, &ppi, *ppi, **ppi);
    printf("----------------------------------------\ns");

    return 0;
}