#include <stdio.h>

// 새로운 자료형 선언 방식 1
struct Person {
    char name[100]; // 구조체 멤버
    int age;
    int height;
    float weight;
};
typedef struct Person Person;

// 새로운 자료형 선언 방식 2
typedef struct Point2D {
    int x;
    int y;
} Point2D;

// POINT 를 새로운 자료형으로 간주
typedef struct point {
    int x;
    int y;
} POINT;

POINT translate(POINT p, POINT delta);

POINT translate(POINT p, POINT delta) {
    POINT new_p;

    new_p.x = p.x + delta.x;
    new_p.y = p.y + delta.y;

    return new_p;
}

typedef float Vector[2];

int main(int argc, const char * argv[]) {
    // 구조체를 새로운 자료형으로 선언하지 않았을 경우
    // struct Person person_a, person_b;
    // struct Point2D p1, p2;

    // typedef 를 이용하여 새로운 자료형으로 선언했을 경우
    Person person_a, person_b;
    Point2D p1, p2;

    
    POINT p = {2, 3};
    POINT delta = {10, 10};
    POINT result;

    result = translate(p, delta);
    printf("새로운 점의 좌표는 (%d, %d)입니다.\n", result.x, result.y);


    Vector v1, v2;
    v1[0] = 10.0f;
    v1[1] = 10.0f;

    printf("v1[0] = %4.2f, v1[1] = %4.2f \n", v1[0], v1[1]);

    // 구조체 변수끼리 할당 연산은 가능하지만,
    // typedef 로 정의된 배열형은 할당 연산이 불가능
    
    // 배열은 '원소' 단위로 대입 연산 수행 가능
    // v2 = v1;

    return 0;
}