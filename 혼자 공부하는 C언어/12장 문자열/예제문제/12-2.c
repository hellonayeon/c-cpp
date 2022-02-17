/* 포인터로 문자열을 사용하는 방법 */

#include <stdio.h>

int main(void)
{
    char *dessert = "apple"; // 문자열은 주소이므로 char 포인터에 대입하여 사용할 수 있다.

    printf("오늘의 후식은 %s입니다.\n", dessert);
    dessert = "banana";
    printf("내일의 후식은 %s입니다.\n", dessert);

    /* 여기서 잠깐! */
    // 같은 문자열 상수를 여러 번 사용할 때
    // 하나의 문자열만 메모리에 저장하고 그 주소를 공유하도록 번역
    char *pa = "apple";
    char *pb = "apple";
    printf("%p, %p", pa, pb);

    return 0;
}