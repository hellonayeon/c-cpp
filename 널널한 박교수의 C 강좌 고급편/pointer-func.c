#include <stdio.h>

/* 함수 선언부 */
// 최근 컴파일러는 함수 선언부를 생략해도 실행 가능하나,
// warning 을 발생시킨다.
int sum(int a, int b);
// int sum(int, int);

void change_num1(int n);
void change_num2(int *ptr);

void swap1(int x, int y);
void swap2(int *px, int *py);


int main(int argc, const char * argv[]) {
    int n = 10, m = 20;
    printf("%d와 %d의 합은 %d \n", n, n, sum(n, m));

    int res = sum(100, 200);
    printf("res = %d \n", res);


    // call by value
    int num = 10;
    printf("num = %d \n", num);
    change_num1(num);

    printf("change_num1()의 결과 \n");
    printf("num = %d \n", num);

    // call by reference
    printf("num = %d \n", num);
    change_num2(&num);
    printf("change_num2()의 결과 \n");
    printf("num = %d \n", num);


    // swap
    // call by value
    int a = 100, b = 200;
    
    printf("a=%d b=%d \n", a, b);
    swap1(a, b);
    printf("a=%d b=%d \n", a, b);

    // call by reference
    printf("a=%d b=%d \n", a, b);
    swap2(&a, &b);
    printf("a=%d b=%d \n", a, b);

    return 0;
}

/* 함수 구현부 */
int sum(int a, int b) {
    int result = a + b;
    return result;
}

void change_num1(int n) {
    n = 20;
}

void change_num2(int *ptr) {
    *ptr = 20;
}

void swap1(int x, int y) {
    int tmp;

    printf("swap1() x=%d y=%d \n", x, y);
    tmp = x;
    x = y;
    y = tmp;
    printf("swap2() x=%d y=%d \n", x, y);
}

// 피호출 함수의 px, py 는 main() 함수 내 a, b 변수의 주소값을 가지는 포인터 변수
// 포인터 변수를 통해 피호출 함수가 호출 함수의 값을 변경
void swap2(int *px, int *py) {
    int tmp;

    tmp = *px;
    *px = *py;
    *py = tmp;
}