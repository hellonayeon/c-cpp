#include <stdio.h>
#include <stdlib.h>

typedef int item;
typedef struct ListNode {
    item data;
    struct ListNode *link;
} ListNode;

int main() {
    ListNode node = {100, NULL};
    ListNode *list = &node;

    printf("node.data = %d \n", node.data);
    printf("(*list).data = %d \n", (*list).data);
    printf("list -> data = %d \n", list -> data);


    ListNode *p1;
    ListNode *p2;

    p1 = (ListNode *)malloc(sizeof(ListNode));
    p1->data = 20;

    p2 = (ListNode *)malloc(sizeof(ListNode));
    p2->data = 30;

    p1->link = p2;
    p2->link = NULL;
    
    printf("p1->data = %d \n", p1->data);
    printf("p1->link->data = %d \n", p1->link->data);
    printf("p2->data = %d \n", p2->data);
}