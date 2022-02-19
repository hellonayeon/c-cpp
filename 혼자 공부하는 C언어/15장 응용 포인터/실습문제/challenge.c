/* 프로필 교환 프로그램 */

#include <stdio.h>
#include <string.h>

void swap(char *, void *, void *);

int main(void)
{
    int p1_age, p2_age;
    double p1_height, p2_height;

    printf("첫 번째 사람의 나이와 키 입력: ");
    scanf("%d %lf", &p1_age, &p1_height);

    printf("두 번째 사람의 나이와 키 입력: ");
    scanf("%d %lf", &p2_age, &p2_height);

    printf("%d %lf %d %lf\n", p1_age, p1_height, p2_age, p2_height);

    swap("int", &p1_age, &p2_age);
    swap("double", &p1_height, &p2_height);

    printf("첫 번째 사람의 나이와 키: %d, %.1lf\n", p1_age, p1_height);
    printf("두 번째 사람의 나이와 키: %d, %.1lf\n", p2_age, p2_height);

    return 0;
}

void swap(char *data, void *a, void *b)
{    
    if (strcmp(data, "int") == 0)
    {
        int tp = *(int *) a;
        *(int *) a = *(int *) b;
        *(int *) b = tp;
    }
    else
    {
        double tp = *(double *) a;
        *(double *) a = *(double *) b;
        *(double *) b = tp;
    }
}