#include <stdio.h>
#include <string.h>

/* 구조체 기본 사용 */
// 구조체 정의
// Person은 struct 태그(식별하기 위한 이름)
struct Person { // Person 구조체 선언
    char name[100]; // 구조체 멤버
    int age;
    int height;
    float weight;
};

struct Point2D { // Point2D 구조체 정의
    int x;
    int y;
};


/* 구조체 내 구조체 선언 */
struct Point
{
    int x;
    int y;
};

// 구조체 내의 구조체 선언
struct Rect {
    struct Point p1;
    struct Point p2;
};


int main(int argc, const char * argv[]) {
    // 구조체 변수 선언
    struct Person personA, personB;

    strcpy(personA.name, "Hong GilDong");
    personA.age = 20;
    personA.height = 179;
    personA.weight = 73.2;

    strcpy(personB.name, "Kwon NaYeon");
    personB.age = 23;
    personB.height = 166;
    personB.weight = 58.2;

    struct Point2D p1, p2;
    p1.x = 100;
    p1.y = 100;
    p2 = p1; // 구조체 복사

    // 구조체 초기화
    struct Person personC = {"Park", 40, 170, 66};
    printf("personC의 이름 = %s, 나이 = %d\n", personC.name, personC.age);



    struct Rect r;
    int w, h, area, peri;

    printf("왼쪽 상단의 좌표를 입력하시오: ");
    scanf("%d %d", &r.p1.x, &r.p1.y);

    printf("오른쪽 하단의 좌표를 입력하시오: ");
    scanf("%d %d", &r.p2.x, &r.p2.y);

    w = r.p2.x - r.p1.x;
    h = r.p2.y - r.p1.y;

    area = w * h;
    peri = 2 * w + 2 * h;
    printf("사각형의 면적은 %d이고 둘레는 %d입니다.\n", area, peri);


    struct Rect new_r;
    // 구조체 간의 대입 연산 가능
    new_r = r; 

    // 구조체 간의 비교 연산 불가능
    // if (r < new_r) { 
    //     printf("new_r이 더 큽니다.\n");
    // }

    // 구조체 배열 사용 가능
    struct Rect arr_r[10];

    return 0;
}