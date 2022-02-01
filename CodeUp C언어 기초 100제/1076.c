#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);

    int cnt = c - 'a';
    int i = 0;
    for(int i=0; i<=cnt; i++) {
        printf("%c ", ('a' + i));
    }
}