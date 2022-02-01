#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    int i = 1;
    for(; sum < n; i++) {
        sum += i;
    }

    printf("%d", i-1);
}