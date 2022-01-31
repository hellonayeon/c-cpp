#include <stdio.h>

int main() {
    int x[5];
    scanf("%1d%1d%1d%1d%1d", &x[0], &x[1], &x[2], &x[3], &x[4]);

    int mul = 10000;
    int i=0;
    for(i=0, mul = 10000; i<5; i++) {
        printf("[%d]\n", x[i] * mul);
        mul /= 10;
    }
}