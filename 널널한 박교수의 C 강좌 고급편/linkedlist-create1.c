#include <stdio.h>
#include <stdlib.h>

typedef char item; // item 타입 추상화
typedef struct ListNode {
    item data;
    struct ListNode *link;
} ListNode;

int main() {
    ListNode *head, *current, *new_node;
    head = current = new_node = NULL;
    item n;

    printf("문자 데이터를 입력하시오: ");
    while (scanf("%c\n", &n) != EOF) {
        new_node = (ListNode *) malloc(sizeof(ListNode));
        new_node->data = n;
        new_node->link = NULL;

        if(head == NULL) {
            head = new_node;
            current = new_node;
        }
        else {
            current->link = new_node;
            current = new_node;
        }
    }

    printf("연결리스트의 원소들은 다음과 같습니다 \n");
    current = head;
    while (current != NULL) {
        printf("%c \n", current->data);
        current = current->link;
    }

    return 0;
}