#include <stdio.h>

int main() {
    int board[19][19];
    int n, x, y;
    int i, j, k;

    for (i=0; i<19; i++) {
        for (j=0; j<19; j++) {
            scanf("%d", &board[i][j]);
        }
    }

    scanf("%d", &n);

    while (n-- > 0) {
        scanf("%d %d", &x, &y);

        x--; y--;
        
        // 세로 뒤집기
        for (k=0; k<19; k++) {
            board[k][y] = !board[k][y];
        }

        // 가로 뒤집기
        for (k=0; k<19; k++) {
            board[x][k] = !board[x][k];
        }
    }

    for (i=0; i<19; i++) {
        for (j=0; j<19; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}