/* 동적 할당한 저장 공간을 사용하는 프로그램 */
// malloc 함수는 주어진 인수의 바이트 크기만큼 
// 메모리에서 연속된 저장 공간을 할당한 후에 
// 그 시작 주소를 반환

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pi;
    double *pd;

    pi = (int *)malloc(sizeof(int));
    if (pi == NULL)
    {
        printf("# 메모리가 부족합니다.\n");
        exit(1); // 프로그램의 리턴 넘버 0은 성공을 의미
    }
    pd = (double *)malloc(sizeof(double));

    *pi = 10;
    *pd = 3.4;

    printf("정수형으로 사용: %d\n", *pi);
    printf("실수형으로 사용: %lf\n", *pd);

    free(pi);
    free(pd);

    return 0;
}