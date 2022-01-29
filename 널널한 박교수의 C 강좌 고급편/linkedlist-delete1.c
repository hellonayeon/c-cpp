#include <stdio.h>
#include <stdlib.h>


typedef int item;
typedef struct ListNode {
    item data;
    struct ListNode *link;
} ListNode;

void remove_head(ListNode **phead);
void insert_node(ListNode **phead, ListNode *prev_node, ListNode *new_node);
void display_list(ListNode *head);

int main() {
    ListNode *head = NULL;
    ListNode *node1, *node2;

    node1 = (ListNode *)malloc(sizeof(ListNode));
    node1->data = 100;
    node1->link = NULL;
    node2 = (ListNode *)malloc(sizeof(ListNode));
    node2->data = 200;
    node2->link = NULL;

    insert_node(&head, NULL, node1);
    insert_node(&head, NULL, node2);
    printf("node1, node2 삽입 후 결과 \n");
    display_list(head);

    // 헤드노드 삭제
    remove_head(&head);
    printf("헤드노드 삭제 후 \n");
    display_list(head);

    // 헤드노드 삭제
    remove_head(&head);
    printf("헤드노드 삭제 후 \n");
    display_list(head);
}

void insert_node(ListNode **phead, ListNode *prev_node, ListNode *new_node) {
    if(prev_node == NULL) {
        new_node->link = *phead;
        *phead = new_node;
    }
    else {
        new_node->link = prev_node;
        prev_node->link = new_node;
    }
}

void remove_head(ListNode **phead) {
    if (*phead != NULL) {
        ListNode *tmp_node;
        tmp_node = *phead;
        *phead = (*phead)->link;
        free(tmp_node);
    }
}

void display_list(ListNode *head) {
    ListNode *current_node = head;

    printf("(");
    while (current_node != NULL) {
        printf(" %d", current_node->data);
        current_node = current_node->link;

        if(current_node != NULL) {
            printf(",");
        }
    }

    printf(" )\n");
}