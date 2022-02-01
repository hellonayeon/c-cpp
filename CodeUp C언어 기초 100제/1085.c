#include <stdio.h>

int main() {
    long int h, b, c, s;
    scanf("%ld %ld %ld %ld", &h, &b, &c, &s);
    
    float size = (h*b*c*s) / (8. * 1024 * 1024);
    printf("%.1f MB", size);
}