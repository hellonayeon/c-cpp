/* void 포인터의 사용 */

#include <stdio.h>

int main(void)
{
    int a = 10;
    double b = 3.5;
    void *vp; // 가리키는 자료형을 결정하지 않겠다는 의미

    vp = &a;
    printf("a: %d\n", *(int *) vp); // void 포인터를 사용할 때는 원하는 형태로 변환하여 사용

    // void 포인터로 정수 연산 가능
    printf("a의 주소: %u\n", *(int *) vp);
    printf("a의 주소 + 1의 값: %u\n", *(int *) vp + 1);
    *(int *) vp = *(int *) vp + 1;
    printf("changed a: %d\n", a);

    vp = &b;
    printf("b: %.1f\n", *(double *) vp); 

    return 0;
}