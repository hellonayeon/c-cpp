#include <stdio.h>

int main() {
    int n, x, y;
    int i, j;
    int board[19][19] = {0};

    scanf("%d", &n);
    while (n-- > 0) {
        scanf("%d %d", &x, &y);

        board[x-1][y-1] = 1;
    }

    for (i=0; i<19; i++) {
        for (j=0; j<19; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}