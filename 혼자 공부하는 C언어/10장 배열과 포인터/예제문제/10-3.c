/* 포인터를 이용한 배열의 값 출력 */

#include <stdio.h>

int main(void)
{
    int ary[3] = {10, 20, 30};
    int *pa = ary;
    int i;

    printf("배열의 값: ");
    for (i=0; i<3; i++)
    {
        printf("%d ", *pa);
        pa++;
    }
}