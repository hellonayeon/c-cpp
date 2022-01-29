#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int a[5] = {20, 30, 40};

    // a 와 &a[0] 을 확인
    printf("a = %p &a[0] = %p \n", a, &a[0]);

    for(int i=0; i<5; i++) {
        printf("a[%d] = %d, *(a+%d) = %d \n", i, a[i], i, *(a+i));
    }


    // 동적 할당을 통해 여러개의 기억공간을 할당받아 포인터 변수를 통해 사용 가능
    int *b;

    b = (int *) malloc( 5 * sizeof(int) );
    if (b == NULL) {
        printf("메모리 할당 에러 \n");
        return -1;
    }

    *b = 20;
    *(b+1) = 30;
    *(b+2) = 40;
    *(b+3) = 0;
    *(b+4) = 0;

    for(int i=0; i<5; i++) {
        printf("a[%d] = %d, *(a+%d) = %d \n", i, b[i], i, *(b+i));
    }

    free(b);

    return 0;
}