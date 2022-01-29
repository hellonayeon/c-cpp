#include <stdio.h>
#include <stdlib.h>

typedef int item;
typedef struct ListNode {
    item data;
    struct ListNode *link;
} ListNode;

void insert_node(ListNode **phead, ListNode *new_node);

int main() {
    ListNode *head = NULL;
    ListNode *node, *current_node;

    for(int i=1; i<=5; i++) {
        node = (ListNode *)malloc(sizeof(ListNode));
        node->data = i;
        insert_node(&head, node);
    }

    current_node = head;
    while(current_node != NULL) {
        printf("current_node->data = %d \n", current_node->data);
        current_node = current_node -> link;
    }

    return 0;
}

void insert_node(ListNode **phead, ListNode *new_node) {
    new_node->link = *phead;
    *phead = new_node;
}