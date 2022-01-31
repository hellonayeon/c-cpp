#include <stdio.h>

int main() {
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    long long int sum = a + b + c;
    float avg = sum / 3.;
    
    printf("%lld\n", sum);
    printf("%.1f\n", avg);
}