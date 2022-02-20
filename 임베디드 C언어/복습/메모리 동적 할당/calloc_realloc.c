/* calloc, realloc 사용해서 매모리 동적 할당 받기 */

#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    struct arr {
        int size;
        int max_size;
        int *array;
    } *lpArray;
    
    lpArray = (struct arr*)malloc(sizeof(struct arr));
    lpArray->size = 0;
    lpArray->max_size = 5;
    lpArray->array = (int *)calloc(lpArray->max_size, sizeof(int));

    while (1)
    {
        if (lpArray->size >= lpArray->max_size)
        {
            printf("array is full!!\n");
            lpArray->max_size += 5;
            lpArray->array = (int *)realloc(lpArray->array, lpArray->max_size * sizeof(int));
        }

        scanf("%d", &lpArray->array[lpArray->size]);
        if (lpArray->array[lpArray->size] == -1) break;
        lpArray->size++;
    }

    int i;
    for (i=0; i<lpArray->size; i++)
    {
        printf("%d\t", lpArray->array[i]);
    }
    printf("\n");

    free(lpArray->array);
    free(lpArray);

    return 0;
}