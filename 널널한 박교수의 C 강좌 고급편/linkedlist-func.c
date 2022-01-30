#include <stdio.h>
#include <stdlib.h>

typedef int item;
typedef struct ListNode {
    item data;
    struct ListNode *link;
} ListNode;

ListNode *create_node(item data, ListNode *link);
void insert_node(ListNode **phead, ListNode *prev, ListNode *new);
void remove_node(ListNode **phead, ListNode *prev, ListNode *remove);
void remove_first(ListNode **phead);
void remove_last(ListNode **phead);
int get_sum(ListNode *head);
int get_max(ListNode *head);
int get_min(ListNode *head);
void delete_max(ListNode **head);
ListNode *concat(ListNode *head1, ListNode *head2);
int get_length(ListNode *head);
void display(ListNode *head);

int main() {
    ListNode *list1 = NULL, *list2 = NULL;
    ListNode *p;

    insert_node(&list1, NULL, create_node(10, NULL));
    insert_node(&list1, NULL, create_node(100, NULL));
    insert_node(&list1, NULL, create_node(90, NULL));
    insert_node(&list1, NULL, create_node(50, NULL));
    insert_node(&list1, NULL, create_node(40, NULL));
    insert_node(&list1, NULL, create_node(30, NULL));
    printf("연결리스트 출력 \n");
    printf("list1 = ");
    display(list1);
}


ListNode *create_node(item data, ListNode *link) {
    ListNode *new_node;
    new_node = (ListNode *) malloc(sizeof(ListNode));
    if (new_node == NULL) {
        fprintf(stderr, "메모리 할당 에러 \n");
        exit(1);
    }

    new_node->data = data;
    new_node->link = link;
    return(new_node);
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

void remove_first(ListNode **phead) {
    if (*phead == NULL) {
        return;
    }

    ListNode *removed_node;
    removed_node = *phead;
    *phead = (*phead)->link;
    free(removed_node);
}

void remove_last(ListNode **phead) {
    ListNode *prev = (*phead);
    ListNode *next;

    if(prev == NULL) {
        return;
    }
    else if (prev->link == NULL) { // 단일 노드인 경우
        free(prev);
        *phead = NULL;
        return;
    }

    while (prev != NULL) {
        next = prev->link;
        if(next->link == NULL) {
            prev->link = NULL;
            free(next);
            return;
        }
        else {
            prev = next;
        }
    }
}

int get_sum(ListNode *head) {
    int sum = 0;
    ListNode *curr = head;

    while(curr != NULL) {
        sum += curr->data;
        curr = curr->link;
    }

    return sum;
}

int get_max(ListNode *head) {
    int max;

    ListNode *curr = head;
    if(curr != NULL) {
        max = curr->data;
    }

    while (curr != NULL) {
        if(curr->data > max) {
            max = curr->data;
        }
        curr = curr->link;
    }

    return max;
}

int get_min(ListNode *head) {
    int min;

    ListNode *curr = head;
    if(curr != NULL) {
        min = curr->data;
    }

    while (curr != NULL) {
        if(curr->data < min) {
            min = curr->data;
        }
        curr = curr->link;
    }
    
    return min;
}

void delete_max(ListNode **phead) {
    int max = 0;
    ListNode *curr = *phead;
    ListNode *prev = NULL, *next = NULL;

    if (curr == NULL) {
        return;
    }
    else if (curr->link == NULL) {
        *phead = NULL;
        free(curr);
    }

    max = get_max(*phead);

    while (curr->link != NULL) {
        prev = curr;
        next = curr->link;

        if (curr->data == max) {
            remove_node(phead, NULL, curr);
            curr = next;
        }
        else if (next->data == max) {
            remove_node(phead, curr, next);
            curr = prev;
        }
        else {
            curr = curr->link;
        }
    }
}

ListNode *concat(ListNode *head1, ListNode *head2) {
    ListNode *p;
    if (head1 == NULL) {
        return head2;
    }
    else if (head2 == NULL) {
        return head1;
    }
    else {
        p = head1;

        while (p->link != NULL) {
            p = p->link;
        }
        p->link = head2;

        return head1;
    }
}

int get_length(ListNode *head) {
    int n = 0;

    ListNode *curr = head;
    while (curr != NULL) {
        curr = curr->link;
        n++;
    }

    return n;
}

void display(ListNode *head) {
    ListNode *curr = head;

    printf("(");
    while (curr != NULL) {
        printf("%d", curr->data);
        if(curr->link != NULL) {
            printf(", ");
        }
        curr = curr->link;
    }
    printf(") \n");
}