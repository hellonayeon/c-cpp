#include <stdio.h>

int main() {
    int a, m, d, n;
    int i;
    long int res;

    scanf("%d %d %d %d", &a, &m, &d, &n);

    res = a;
    for (i=1; i<n; i++) {
        res = res*m + d;
    }

    printf("%ld", res);
}