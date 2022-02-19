/* 소수 계산 프로그램 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc_prime(int *pi, int size);
void print_prime(int *pi, int size);

int main(void)
{
    int size;
    int *pi;

    printf("양수 입력: ");
    scanf("%d", &size);

    pi = (int *)calloc(size+1, sizeof(int));

    calc_prime(pi, size);
    print_prime(pi, size);
}

void calc_prime(int *pi, int size)
{
    int i, j;
    int is_prime;
    
    for (i=2; i<size; i++)
    {
        is_prime = 1;
        for (j=2; j<=sqrt(i); j++)
        {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        
        if (is_prime) {
            *(pi + i) = i;
        }
        
    }
}

void print_prime(int *pi, int size)
{
    int i;

    for (i=2; i<size; i++)
    {
        if (*(pi + i) == 0) {
            printf("%4s", "X");
        }
        else {
            printf("%4d", *(pi + i));
        }

        if ((i-1)%5 == 0) {
            printf("\n");
        }
    }
}