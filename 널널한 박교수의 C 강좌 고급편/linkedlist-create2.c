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
    ListNode *node;

    node = (ListNode *)malloc(sizeof(ListNode));
    node->data = 100;

    insert_node(&head, node);
    printf("node->data = %d \n", node->data);
    printf("head->data = %d \n", head->data);

    node = (ListNode *)malloc(sizeof(ListNode));
    node->data = 200;
    insert_node(&head, node);
    printf("node->data = %d \n", node->data);
    printf("head->data = %d \n", head->data);
    printf("head->link->data = %d \n", head->link->data);
    printf("head->link->link = %p \n", head->link->link);
}

void insert_node(ListNode **phead, ListNode *new_node) {
    new_node->link = *phead;
    *phead = new_node;
}