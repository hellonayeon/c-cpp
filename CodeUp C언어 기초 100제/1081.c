#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int i, j;
    for (i = 1; i <= n; i++) {
        for(j = 1; j <= m; j++) {
            printf("%d %d\n", i, j);
        }
    }
}