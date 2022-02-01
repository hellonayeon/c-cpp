#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;
    int i, min=23;

    scanf("%d", &n);

    for (i=0; i<n; i++) {
        scanf("%d", &k);
        min = (k < min) ? k : min;
    }

    printf("%d", min);
}