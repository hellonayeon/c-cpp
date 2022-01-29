#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ip;    // int형 변수를 가리키는 포인터 변수
    double *dp; // double형 변수를 가리키는 포인터 변수

    // malloc: 할당된 메모리의 첫 번째 바이트에 대한 주소를 반환 | 메모리를 할당할 수 없을 경우 NULL을 반환 | malloc 함수가 반환한 값은 반드시 포인터 변수에 대입
    // 동적으로 int, double 자료형 크기의 메모리를 할당 받는다
    ip = (int *)malloc(sizeof(int));
    dp = (double *)malloc(sizeof(double));

    // 할당된 메모리 공간에 값을 넣는다
    *ip = 10;
    *dp = 3.4;

    printf("정수형 포인터 변수의 값: %d \n", *ip);
    printf("실수형 포인터 변수의 값: %lf \n", *dp);

    // 동적으로 할당된 메모리 블럭의 사용이 종료되면 시스템에 반납 필수!
    // 사용되지 않으면서 반납되지 않은 메모리 블럭이 자꾸 발생하게 되면 시스템 성능이 저하
    // 메모리 누수(leak) 현상
    // 사용되지 않는 메모리 블럭 = garbage memory
    // free 함수는 동적으로 할당된 메모리 블럭에 대한 포인터를 매개변수로 받는다
    free(ip);
    free(dp);


    int *scores;
    int i;

    scores = (int *) malloc( 100 * sizeof(int) );
    if (scores == NULL) {
        printf("동적 메모리 할당 오류 \n");
        exit(1);
    }

    for(i=1; i<=100; i++) {
        // score[i] = i;
        *(scores+i) = i;
    }

    free(scores);

    return 0;
}