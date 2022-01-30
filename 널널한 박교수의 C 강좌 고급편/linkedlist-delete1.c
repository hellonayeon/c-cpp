#include <stdio.h>
#include <stdlib.h>


typedef int item;
typedef struct ListNode {
    item data;
    struct ListNode *link;
} ListNode;

void insert_node(ListNode **phead, ListNode *prev, ListNode *new);
void remove_node(ListNode **phead, ListNode *prev, ListNode *remove);
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

    remove_node(&head, node2, node1);
    printf("node1 삭제 후 \n");
    display_list(head);

    remove_node(&head, NULL, node2);
    printf("node2 삭제 후 \n");
    display_list(head);

    return 0;
}

void insert_node(ListNode **phead, ListNode *prev, ListNode *new) {
    if(prev == NULL) {
        new->link = *phead;
        *phead = new;
    }
    else {
        new->link = prev;
        prev->link = new;
    }
}

void remove_node(ListNode **phead, ListNode *prev, ListNode *remove) {
    if (prev == NULL) { // 헤드노드를 삭제하는 경우
        *phead = (*phead)->link;
    }
    else {
        prev->link = remove->link;
    }

    free(remove);
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