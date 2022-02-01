#include <stdio.h>

int main() {
    int a, d, n;
    int i, sum;

    scanf("%d %d %d", &a, &d, &n);

    sum = a;
    for (i=1; i<n; i++) {
        sum += d;
    }

    printf("%d", sum);
}