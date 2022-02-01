#include <stdio.h>

int main() {
    char c;
    
    do {
        scanf("%c", &c);
        if(c == ' ') {
            continue;
        }
        printf("%c\n", c);
    } while (c != 'q');
}