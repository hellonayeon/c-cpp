#include <stdio.h>
#include <stdlib.h>

typedef int item;
typedef struct ListNode {
    item data;
    struct ListNode *link;
} ListNode;

void insert_node(ListNode **phead, ListNode *prev, ListNode *new);
void remove_node(ListNode **phead, int value);
void display_list(ListNode *head);

int main() {
    ListNode *head = NULL;
    ListNode *node1, *node2, *node3;

    node1 = (ListNode *) malloc(sizeof(ListNode));
    node1->data = 100;
    node1->link = NULL;
    node2 = (ListNode *) malloc(sizeof(ListNode));
    node2->data = 200;
    node2->link = NULL;
    node3 = (ListNode *) malloc(sizeof(ListNode));
    node3->data = 300;
    node3->link = NULL;

    insert_node(&head, NULL, node1);
    insert_node(&head, NULL, node2);
    insert_node(&head, NULL, node3);

    printf("100, 200, 300 데이터를 가진 노드 삽입 후 결과 \n");
    display_list(head);

    remove_node(&head, 200);
    printf("200 노드 삭제 후 \n");
    display_list(head);

    remove_node(&head, 100);
    printf("100 노드 삭제 후 \n");
    display_list(head);

    remove_node(&head, 300);
    printf("300 노드 삭제 후 \n");
    display_list(head);
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

void remove_node(ListNode **phead, int value) {
    ListNode *curr, *prev = NULL;

    curr = *phead;
    while (curr != NULL) {
        if (curr->data == value) {
            if (prev == NULL) { // 헤드노드를 삭제하는 경우
                *phead = curr->link;
            }
            else {
                prev->link = curr->link;
            }
            free(curr);
            return;
        }
        prev = curr;
        curr = curr->link;
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