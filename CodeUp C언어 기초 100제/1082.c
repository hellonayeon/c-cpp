#include <stdio.h>

int main() {
    int hex;
    scanf("%x", &hex);

    int i;
    for(i=1; i<=15; i++) {
        printf("%X*%X=%X\n", hex, i, hex*i);
    }
}