#include <stdio.h>
#include <stdlib.h>

typedef int item;
typedef struct ListNode {
    item data;
    struct ListNode *link;
} ListNode;

void insert_node(ListNode **phead, ListNode *p, ListNode *new_node);

int main() {
    ListNode *head = NULL, *prev_node = NULL;
    ListNode *node, *current_node;

    for(int i=1; i<=5; i++) {
        node = (ListNode *)malloc(sizeof(ListNode));
        node->data = i;
        insert_node(&head, prev_node, node);
        prev_node = node;
    }

    current_node = head;
    while(current_node != NULL) {
        printf("current_node->data = %d \n", current_node->data);
        current_node = current_node -> link;
    }

    return 0;
}

void insert_node(ListNode **phead, ListNode *p, ListNode *new_node) {
    printf("before : new_node = %p \n", new_node);
    printf("before : *phead = %p \n", *phead);

    if (p == NULL) {
        new_node->link = *phead; // NULL로 초기화
        *phead = new_node;
    }
    else {
        new_node->link= p->link;
        p->link = new_node;
    }

    printf("after : new_node = %p \n", new_node);
    printf("after : *phead = %p \n", *phead);
}