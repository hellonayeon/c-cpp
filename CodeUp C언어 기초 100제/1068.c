#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);

    if (score >= 90 && score <= 100) {
        printf("A");
    }
    else if (score >= 70 && score <= 89) {
        printf("B");
    }
    else if (score >= 40 && score <= 69) {
        printf("C");
    }
    else {
        printf("D");
    }
}