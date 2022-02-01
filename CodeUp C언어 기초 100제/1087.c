#include <stdio.h>

int main() {
    int n;
    int i=1, sum=0;
    
    scanf("%d", &n);

    do {
        sum += i++;
    } while (sum < n);

    printf("%d", sum);
}