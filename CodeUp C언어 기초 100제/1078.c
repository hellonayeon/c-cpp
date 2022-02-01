#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    int i = 2;
    while(i <= n) {
        sum += i;
        i+=2;
    }

    printf("%d", sum);
}