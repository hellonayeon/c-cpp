#include <stdio.h>

int main() {
    int num[24] = {};
    int n, idx;
    int i;

    scanf("%d", &n);

    while (n-- > 0) {
        scanf("%d", &idx);
        num[idx]++;
    }

    for (i=1; i<24; i++) {
        printf("%d ", num[i]);
    }
}