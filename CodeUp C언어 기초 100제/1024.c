#include <stdio.h>

int main() {
    char word[21];
    scanf("%s", word);
    
    int i=0;
    while(word[i] != '\0') {
        printf("\'%c\'\n", word[i++]);
    }
}