#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    float scores[N];
    int i, max=0;
    for (i=0; i<N; i++) {
        scanf("%f", &scores[i]);

        if(scores[i] > max) {
            max = scores[i];
        }
    }

    float sum=0.0; 
    for (i=0; i<N; i++) {
        sum += scores[i]/max*100.0;
    }

    printf("%f\n", sum/N);
}