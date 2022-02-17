/* 로또 번호 생성 프로그램 */

#include <stdio.h>

void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);
int is_unique(int *lotto_nums, int num);

int main(void)
{
    int lotto_nums[6] = {0};

    input_nums(lotto_nums);
    print_nums(lotto_nums);
    return 0;
}

void input_nums(int *lotto_nums)
{
    int i;
    int num;

    for (i=0; i<6; i++) {
        printf("번호 입력 : ");
        scanf("%d", &num);

        if (is_unique(lotto_nums, num)) {
            *(lotto_nums + i) = num;
        }
        else {
            printf("같은 번호가 있습니다!\n");
            i--;
        }
    }
}

void print_nums(int *lotto_nums)
{
    int i;
    
    printf("로또 번호 : ");
    for (i=0; i<6; i++) {
        printf("%d ", *(lotto_nums + i));
    }
    printf("\n");
}

int is_unique(int *lotto_nums, int num) 
{
    int i = 0;

    while (i < 6)
    {
        if (*(lotto_nums + i) == num) return 0;
        i++;
    }
    return 1;
}