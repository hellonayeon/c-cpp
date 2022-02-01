#include <stdio.h>
#include <stdlib.h>

int main() {
    int h, w, n;
    int l, d, x, y;
    int **arr;
    int i, j;

    scanf("%d %d", &h, &w);

    arr = (int **) malloc(sizeof(int *) * h);
    for (i=0; i<h; i++) {
        arr[i] = (int *) malloc(sizeof(int) * w);
    }

    scanf("%d", &n);

    while (n-- > 0) {
        scanf("%d %d %d %d", &l, &d, &x, &y);

        x--; y--;

        // 가로인 경우
        if (d == 0) {
            for (i=0; i<l; i++) {
                arr[x][y+i] = 1;
            }
        }
        // 세로인 경우
        else {
            for (i=0; i<l; i++) {
                arr[x+i][y] = 1;
            }
        }
    }

    for (i=0; i<h; i++) {
        for (j=0; j<w; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}