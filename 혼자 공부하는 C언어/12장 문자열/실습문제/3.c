/* 키보드로 입력한 단어의 길이가 5자를 넘는 경우 6자부터 별(*)을 출력하는 프로그램을 작성합니다. */
/* 단어의 최대 길이는 15자로 제한합니다. */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[15];
    char o_word[15];
    int i;

    printf("단어 입력: ");
    fgets(word, 15, stdin);
    word[strlen(word) - 1] = '\0';

    strcpy(o_word, word);
    printf("%s\n", o_word);
    if (strlen(word) > 5) {
        for (i=5; i<strlen(word); i++) {
            o_word[i] = '*';
        }
    }

    printf("입력한 단어: %s, 생략한 단어: %s\n", word, o_word);
}
