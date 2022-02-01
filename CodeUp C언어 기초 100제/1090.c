#include <stdio.h>

int main() {
    int a, r, n;
    int i;
    long int res;

    scanf("%d %d %d", &a, &r, &n);

    res = a;
    for (i=1; i<n; i++) {
        res *= r;
    }

    printf("%ld", res);
}