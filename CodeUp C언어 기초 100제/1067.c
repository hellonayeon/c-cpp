#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if(n > 0) {
        printf("%s\n", "plus");
    }
    else {
        printf("%s\n", "minus");
    }
    if(n % 2 == 0) {
        printf("%s\n", "even");
    }
    else {
        printf("%s\n", "odd");
    }
}