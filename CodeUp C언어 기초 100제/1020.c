#include <stdio.h>

int main() {
    int a, b;
    scanf("%6d-%7d", &a, &b);
    printf("%06d%07d", a, b);
}