#include <stdio.h>

int main(void) {
    int i;
    char ch;
    short shrt;
    float flt;
    double dbl;

    printf("int 형의 크기 = %lu \n", sizeof(int));
    printf("변수 i의 크기 = %lu \n", sizeof(i));
    printf("변수 ch의 크기 = %lu \n", sizeof(ch));
    printf("변수 shrt의 크기 = %lu \n", sizeof(shrt));
    printf("변수 flt의 크기 = %lu \n", sizeof(flt));
    printf("변수 dbl의 크기 = %lu \n", sizeof(dbl));


    int j;
    char c = 69;
    float f = 12.3;

    printf("j의 값: %d \n", j);
    printf("j의 주소: %p \n", &j);
    printf("c의 값: %c \n", c);
    printf("c의 주소: %p \n", &c);
    printf("f의 값: %f \n", f);
    printf("f의 주소: %p \n", &f);


    // (1)
    // my_pointer 라는 포인터 변수는 
    // my_var 라는 변수의 주소 값을 가지고 있다.
    // (2)
    // my_pointer 는 my_var 변수를 참조한다.
    int *my_pointer;
    int my_var = 10;

    my_pointer = &my_var;
    printf("*my_pointer = %d \n", *my_pointer);
    printf("my_pointer = %p \n", my_pointer);

    my_var = 20;
    printf("\nmy_var = 20으로 변경 \n");
    printf("*my_pointer = %d \n", *my_pointer);
    printf("my_pointer = %p \n", my_pointer);

    // my_pointer 가 가리키고 있는 변수의 값을 변경
    *my_pointer = 100;
    printf("\n*my_pointer = 100으로 변경 \n");
    printf("my_var = %d \n", my_var);


    // 포인터 변수를 초기화 할때는 NULL 을 사용
    my_pointer = NULL;
    printf("NULL value = %p\n", my_pointer);
}