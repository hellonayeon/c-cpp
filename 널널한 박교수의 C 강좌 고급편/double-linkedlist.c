#include <stdio.h>
#include <stdlib.h>

typedef int item;
typedef struct DListNode {
    item data;
    struct DListNode *prev;
    struct DListNode *next;
} DListNode;

void init(DListNode *phead);
DListNode *create_node(int n);
void insert_node(DListNode *before, DListNode *new_node);
void display(DListNode *phead);
void reverse_display(DListNode *phead);
void detail_display(DListNode *phead);

int main() {
    DListNode head_node;
    DListNode *p[10];
    int i;

    init(&head_node);
    printf("head_node의 주소 = %14p\n\n", &head_node);
    for (i=0; i<4; i++) {
        p[i] = create_node(i);
        insert_node(&head_node, p[i]);
        printf("p[%d] 노드를 이중연결리스트에 삽입한 결과 \n", i);
        display(&head_node);
        detail_display(&head_node);
    }
    printf("\n4개의 노드를 이중연결리스트에 삽입한 결과\n");
    detail_display(&head_node);
}

void init(DListNode *phead) {
    phead->prev = phead;
    phead->next = phead;
}

DListNode *create_node(int n) {
    DListNode *new_node = (DListNode *) malloc(sizeof(DListNode));

    new_node->data = n;
    new_node->prev = NULL;
    new_node->next = NULL;

    return new_node;
}

void insert_node(DListNode *before, DListNode *new_node) {
    new_node->prev = before;
    new_node->next = before->next;
    before->next->prev = new_node;
    before->next = new_node;
}

void display(DListNode *phead) {
    DListNode *curr = phead->next;

    printf("순방향 출력: (");
    while (curr != phead) {
        printf(" %d", curr->data);
        curr = curr->next;
        if (curr != phead) printf(",");
    }
    printf(" ) \n");
}

void reverse_display(DListNode *phead) {
    DListNode *curr = phead->prev;

    printf("순방향 출력: (");
    while (curr != phead) {
        printf(" %d", curr->data);
        curr = curr->prev;
        if (curr != phead) printf(",");
    }
    printf(" ) \n");
}

void detail_display(DListNode *phead) {
    DListNode *curr;

    printf("   |%15s |%16s  |%15s |   \n", "Prev Node", "current", "Next Node");
    for (curr = phead->next; curr != phead; curr = curr->next) {
        printf("<--|%15p |%2d(%14p)|%15p |-->\n", curr->prev, curr->data, curr, curr->next);
    }
    printf("\n");
}